#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractableInterface.generated.h"

class UInteractableStateBase;

UINTERFACE(Blueprintable, MinimalAPI)
class UInteractableInterface : public UInterface {
    GENERATED_BODY()
};

class IInteractableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTriggered(const UInteractableStateBase* State);
    
};

