#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LootSourceInterface.generated.h"

class USpawnTable;

UINTERFACE(Blueprintable, MinimalAPI)
class ULootSourceInterface : public UInterface {
    GENERATED_BODY()
};

class ILootSourceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OverrideLootTable(USpawnTable* SpawnTable, const TArray<FName>& SpawnTags);
    
};

