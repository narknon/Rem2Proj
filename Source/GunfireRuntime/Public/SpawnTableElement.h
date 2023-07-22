#pragma once
#include "CoreMinimal.h"
#include "SpawnTableEntry.h"
#include "SpawnTableElement.generated.h"

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API USpawnTableElement : public USpawnTableEntry {
    GENERATED_BODY()
public:
    USpawnTableElement();
};

