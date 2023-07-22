#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RandomTileActorInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class URandomTileActorInterface : public UInterface {
    GENERATED_BODY()
};

class IRandomTileActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRandomSeed(int32 Seed);
    
};

