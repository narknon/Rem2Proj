#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PooledObjectInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPooledObjectInterface : public UInterface {
    GENERATED_BODY()
};

class IPooledObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPooledObjectRecycled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPooledObjectDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPooledObjectActivated();
    
};

