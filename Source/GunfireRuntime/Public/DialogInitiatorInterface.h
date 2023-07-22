#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DamageInfo.h"
#include "DialogInitiatorInterface.generated.h"

class UDialogComponent;

UINTERFACE(Blueprintable)
class UDialogInitiatorInterface : public UInterface {
    GENERATED_BODY()
};

class IDialogInitiatorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldExitDialogFromDamage(UDialogComponent* Dialog, const FDamageInfo& Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldExitDialog(UDialogComponent* Dialog);
    
};

