// Copyright : All rights reserved by Zoom Video Communications 2022-

// This code is ported from :
// https://developers.zoom.us/docs/meeting-sdk/windows/pkce/

#pragma once

#include "ZoomUESDKDef.h"

#include "openssl/sha.h" // For generating SHA256 hash.
#include "sodium.h"      // For generating random bytes.
#include "wincrypt.h"    // For encoding with BASE64.
#include <iomanip>
#include <sstream>
#include <string>
#include <windows.h>
#include "jwt/include/jwt.h"

#pragma comment(lib, "crypt32.lib") // For encoding with BASE64.

BEGIN_ZOOM_SDK_UE_NAMESPACE

struct Auth_Pair {
  FString auth_url;
  FString verifier;
};

// Encodes the given URL and returns it as an FString.
FString EncodeURL(const FString &url_to_encode);

// Encodes the given string and returns a base64 encoded FString.
FString EncodeBase64(const FString &str_to_encode);

// Generates PKCE Auth pair given the client id and redirect url.
Auth_Pair PKCE_ZM_AUTH_GEN_FUNC(const std::string &client_id,
                                const std::string &redirect_url);

// Generates JWT token given the client id and client secret.
FString ZM_AUTH_JWT_GEN(std::string &client_id, std::string &client_secret);

END_ZOOM_SDK_UE_NAMESPACE