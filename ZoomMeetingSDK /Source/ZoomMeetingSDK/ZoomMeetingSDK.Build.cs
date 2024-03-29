// Some copyright should be here...

using System;
using System.IO;
using UnrealBuildTool;

public class ZoomMeetingSDK : ModuleRules
{
	public ZoomMeetingSDK(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		// Path to the zoomLibPath.
		// Update this to the path where Zoom SDK is.
		// Note: UE only supports x64.
        string zoomLibPath = "$(PluginDir)/Source/Library/ZoomSDK";

        // Add all the dll's and lib's from Zoom SDK.
        RuntimeDependencies.Add("$(BinaryOutputDir)/*.dll", (Path.Combine(zoomLibPath, "bin", "*.dll")));
        PublicAdditionalLibraries.Add(Path.Combine(zoomLibPath, "lib", "sdk.lib"));

		// Add libs for PKCE
        // Add sodium lib
        PublicDefinitions.Add("SODIUM_STATIC=1");
        PublicDefinitions.Add("SODIUM_EXPORT=");
        string sodiumLibPath = "$(PluginDir)/Source/Library/libsodium/x64";
        string sodiumHeaderPath = "$(PluginDir)/Source/Library/libsodium/include";
		// Current version of sodium libraries to use/link-to.
		string sodiumCurrentVersion = "v143";
        PublicAdditionalLibraries.Add(Path.Combine(sodiumLibPath, "Release", 
			sodiumCurrentVersion, "static", "libsodium.lib"));

        // Add openssl lib
        string opensslLibPath = "$(PluginDir)/Source/Library/openssl/x64/lib";
        // Path to the current version of openssl libraries to use/link-to.
        string opensslHeaderPath = "$(PluginDir)/Source/Library/openssl/x64/include";
        RuntimeDependencies.Add("$(BinaryOutputDir)/*.dll", (Path.Combine(opensslLibPath, "*.dll")));
        PublicAdditionalLibraries.Add(Path.Combine(opensslLibPath, "libcrypto.lib"));
        PublicAdditionalLibraries.Add(Path.Combine(opensslLibPath, "libssl.lib"));

		// Default header path
        string defaultHeaderPath = "$(PluginDir)/Source/Library";

        PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
				zoomLibPath + "/h",
                sodiumHeaderPath,
                opensslHeaderPath,
                defaultHeaderPath,
            }
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
				"RenderCore",
				"RHI",
				"Projects",
                "OpenSSL",
            }
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
				"OpenSSL",
            }
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
