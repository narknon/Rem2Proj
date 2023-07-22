using UnrealBuildTool;

public class GunfireTechRequirementsEOS : ModuleRules {
    public GunfireTechRequirementsEOS(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimGraphRuntime",
            "AnimationCore",
            "AudioExtensions",
            "AudioLinkCore",
            "AudioMixer",
            "AudioPlatformConfiguration",
            "Chaos",
            "ChaosCloth",
            "ClothingSystemRuntimeCommon",
            "ClothingSystemRuntimeInterface",
            "Constraints",
            "Core",
            "CoreOnline",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "GameplayTasks",
            "GunfireTechRequirements",
            "InputCore",
            "IrisCore",
            "Landscape",
            "MeshDescription",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "NetCore",
            "PacketHandler",
            "PhysicsCore",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "StaticMeshDescription",
            "TypedElementFramework",
            "TypedElementRuntime",
            "UMG",
        });
    }
}
