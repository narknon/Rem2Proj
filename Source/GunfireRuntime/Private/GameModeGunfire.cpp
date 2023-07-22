#include "GameModeGunfire.h"
#include "GameRules.h"
#include "Templates/SubclassOf.h"


void AGameModeGunfire::OnPlayerDied_Implementation(APlayerController* Player) {
}

void AGameModeGunfire::ApplyDamage(AActor* CauseActor, AActor* TargetActor, float Damage, float DamageMod, float DamageScalar, TSubclassOf<UDamageTypeGunfire> DamageType, TSubclassOf<UImpactDirection> ImpactDirection) {
}

AGameModeGunfire::AGameModeGunfire() {
    this->GameRulesClass = AGameRules::StaticClass();
    this->GameRules = NULL;
}

