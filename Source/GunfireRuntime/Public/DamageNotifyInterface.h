#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DamageInfo.h"
#include "DamageNotifyInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UDamageNotifyInterface : public UInterface {
    GENERATED_BODY()
};

class IDamageNotifyInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotifyTakeDamage(const FDamageInfo& DamageInfo);
    
};

