#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SpawnableInterface.generated.h"

class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class USpawnableInterface : public UInterface {
    GENERATED_BODY()
};

class ISpawnableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta=(WorldContext="WorldContextObject"))
    int32 ModifySpawnLevel(int32 InLevel, UObject* WorldContextObject);
    
};

