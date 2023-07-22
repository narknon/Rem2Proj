using UnrealBuildTool;

public class Remnant2EditorTarget : TargetRules {
	public Remnant2EditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		ExtraModuleNames.AddRange(new string[] {
			"GunfireRuntime",
			"Remnant",
		});
	}
}
