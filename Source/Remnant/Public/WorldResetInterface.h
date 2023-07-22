#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "WorldResetInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UWorldResetInterface : public UInterface {
    GENERATED_BODY()
};

class IWorldResetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWorldReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotifyAllWorldReset();
    
};

