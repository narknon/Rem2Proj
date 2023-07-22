#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DamageInfo.h"
#include "HealingInfo.h"
#include "DamageableInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UDamageableInterface : public UInterface {
    GENERATED_BODY()
};

class IDamageableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResolveTarget(UPARAM(Ref) FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ModifyIncomingDamage(UPARAM(Ref) FDamageInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FilterIncomingHealing(const FHealingInfo& HealingInfo, float& HealingOut, bool& ShouldApplyDamagHealing);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FilterIncomingDamage(const FDamageInfo& DamageInfo, float& DamageOut, bool& ShouldApplyDamage);
    
};

