using UnrealBuildTool;

public class Remnant2GameTarget : TargetRules {
	public Remnant2GameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		ExtraModuleNames.AddRange(new string[] {
			"GunfireRuntime",
			"Remnant",
		});
	}
}
