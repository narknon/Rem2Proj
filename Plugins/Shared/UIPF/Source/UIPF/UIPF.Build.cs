using UnrealBuildTool;

public class UIPF : ModuleRules {
    public UIPF(ReadOnlyTargetRules Target) : base(Target) {
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
            "Foliage",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "IrisCore",
            "Landscape",
            "MeshDescription",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "NetCore",
            "Niagara",
            "NiagaraCore",
            "NiagaraShader",
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
