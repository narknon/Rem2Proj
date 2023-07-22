using UnrealBuildTool;

public class Remnant2Target : TargetRules {
	public Remnant2Target(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		ExtraModuleNames.AddRange(new string[] {
			"GunfireRuntime",
			"Remnant",
		});
	}
}
