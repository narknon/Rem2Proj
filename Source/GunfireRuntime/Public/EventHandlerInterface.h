#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EventHandlerInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UEventHandlerInterface : public UInterface {
    GENERATED_BODY()
};

class IEventHandlerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleEvent(FName EventName);
    
};

