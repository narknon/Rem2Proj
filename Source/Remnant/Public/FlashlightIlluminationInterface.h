#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FlashlightIlluminationInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UFlashlightIlluminationInterface : public UInterface {
    GENERATED_BODY()
};

class IFlashlightIlluminationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFlashlightEndOverlap(AActor* LightOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFlashlightBeginOverlap(AActor* LightOwner);
    
};

