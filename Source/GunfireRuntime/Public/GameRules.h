#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DamageInfo.h"
#include "GameRules.generated.h"

class AWeaponBase;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API AGameRules : public AActor {
    GENERATED_BODY()
public:
    AGameRules();
    UFUNCTION(BlueprintCallable)
    float GetWeaponDamage(AActor* ItemOwner, AWeaponBase* Item, bool ApplyModifiers);
    
    UFUNCTION(BlueprintCallable)
    FDamageInfo GetDamageInfo(AActor* ItemOwner, AWeaponBase* Item);
    
};

