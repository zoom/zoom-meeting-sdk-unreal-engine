// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "PKCE_ZM_Auth_Gen.h"
#include <chrono>

BEGIN_ZOOM_SDK_UE_NAMESPACE

namespace {
// Finds and replaces an old string with a new string.
// Note: The source string might get modified.
void strFindAndReplace(std::string &str, const std::string &oldStr,
                       const std::string &newStr) {
  std::string::size_type pos = 0u;
  while ((pos = str.find(oldStr, pos)) != std::string::npos) {
    str.replace(pos, oldStr.length(), newStr);
    pos += newStr.length();
  }
}

// Trims the padding within the given string.
void trimPadding(std::string &s) {
  s.erase(std::find_if(s.rbegin(), s.rend(),
                       [](unsigned char ch) { return ch != '='; })
              .base(),
          s.end());
}

// Encodes the URL.
std::string url_encode(const std::string &value) {
  std::ostringstream escaped;
  escaped.fill('0');
  escaped << std::hex;

  for (std::string::const_iterator i = value.begin(), n = value.end(); i != n;
       ++i) {
    std::string::value_type c = (*i);

    // Keep alphanumeric and other accepted characters intact
    if (isalnum(c) || c == '-' || c == '_' || c == '.' || c == '~') {
      escaped << c;
      continue;
    }

    // Any other characters are percent-encoded
    escaped << std::uppercase;
    escaped << '%' << std::setw(2) << int((unsigned char)c);
    escaped << std::nouppercase;
  }

  return escaped.str();
}
} // namespace

FString EncodeURL(const FString &url_to_encode) {
  auto encoded_url_str = url_encode(TCHAR_TO_UTF8(*url_to_encode));
  return FString(encoded_url_str.c_str());
}

FString EncodeBase64(const FString &str_to_encode) {
  return FBase64::Encode(str_to_encode);
}

Auth_Pair PKCE_ZM_AUTH_GEN_FUNC(const std::string &client_id,
                                const std::string &redirect_url) {
  // struct to hold the return pair
  Auth_Pair ret;

  // TODO(karthik.ravindran): Refactor the code
  // 1. Create a function to CryptBinaryToStringA and replace string and trim
  // padding.
  // 2. Rename variable names.

  // create the verifier
  static std::string verifier;
  char byteArray[32];
  randombytes_buf(byteArray, 32);
  BYTE *Bytes = reinterpret_cast<BYTE *>(const_cast<char *>(byteArray));

  char base64[256];
  DWORD base64Len;

  if (CryptBinaryToStringA(Bytes, 32, CRYPT_STRING_BASE64 | CRYPT_STRING_NOCRLF,
                           base64, &base64Len)) {
    verifier = std::string(base64);
    strFindAndReplace(verifier, "+", "-");
    strFindAndReplace(verifier, "/", "_");
    trimPadding(verifier);
  }

  // create the challenge
  const char *byteArray_2 = verifier.c_str();

  unsigned char hash[SHA256_DIGEST_LENGTH];
  SHA256_CTX sha256;
  SHA256_Init(&sha256);
  SHA256_Update(&sha256, byteArray_2, strlen(byteArray_2));
  SHA256_Final(hash, &sha256);

  char base64_2[256];
  DWORD base64Len_2;
  auto challenge = std::string(base64);

  if (CryptBinaryToStringA(hash, 32, CRYPT_STRING_BASE64 | CRYPT_STRING_NOCRLF,
                           base64_2, &base64Len_2)) {
    challenge = std::string(base64_2);
    strFindAndReplace(challenge, "+", "-");
    strFindAndReplace(challenge, "/", "_");
    trimPadding(challenge);
  }

  // create the URL
  std::string url = "https://zoom.us/oauth/authorize";
  url += "?response_type=code";
  url += "&client_id=" + client_id;
  url += "&code_challenge=" + challenge;
  url += "&redirect_uri=" + url_encode(redirect_url);
  url += "&code_challenge_method=" + std::string("S256");

  ret.auth_url = FString(url.c_str());
  ret.verifier = FString(verifier.c_str());

  return ret;
}

FString ZM_AUTH_JWT_GEN(std::string client_id, std::string client_secret) {
  auto token = jwt::create()
                   .set_algorithm("HS256")
                   .set_type("JWT")
                   .set_payload_claim("appKey", jwt::claim(client_id))
                   .set_issued_at(std::chrono::system_clock::now())
                   .set_expires_at(std::chrono::system_clock::now() +
                                   std::chrono::seconds{7200})
                   .set_payload_claim(
                       "tokenExp", jwt::claim(std::chrono::system_clock::now() +
                                              std::chrono::seconds{7200}))
                   .sign(jwt::algorithm::hs256{client_secret});

  return FString(token.c_str());
}

END_ZOOM_SDK_UE_NAMESPACE