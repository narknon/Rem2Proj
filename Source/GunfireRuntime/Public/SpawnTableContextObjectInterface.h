#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SpawnTableContextObjectInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class USpawnTableContextObjectInterface : public UInterface {
    GENERATED_BODY()
};

class ISpawnTableContextObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GatherSpawnTableContextTags(UPARAM(Ref) TArray<FName>& OutTags, AActor* ContextActor);
    
};

