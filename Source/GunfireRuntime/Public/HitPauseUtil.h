#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DamageInfo.h"
#include "Templates/SubclassOf.h"
#include "HitPauseUtil.generated.h"

class AActor;
class UDamageTypeGunfire;

UCLASS(Blueprintable)
class UHitPauseUtil : public UObject {
    GENERATED_BODY()
public:
    UHitPauseUtil();
    UFUNCTION(BlueprintCallable)
    static void ApplyHitPause(AActor* Actor, TSubclassOf<UDamageTypeGunfire> DamageTypeClass, float DurationScalar);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AllowsHitPause(AActor* Actor, const FDamageInfo& DamageInfo, bool bCheckOwner);
    
};

