#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HealingInfo.h"
#include "HealingInfoUtil.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UHealingInfoUtil : public UObject {
    GENERATED_BODY()
public:
    UHealingInfoUtil();
    UFUNCTION(BlueprintCallable)
    static void SetHealing(UPARAM(Ref) FHealingInfo& Info, float Healing);
    
    UFUNCTION(BlueprintCallable)
    static void ModifyHealing(UPARAM(Ref) FHealingInfo& Info, float Healing, float HealingMod, float HealingScalar);
    
};

