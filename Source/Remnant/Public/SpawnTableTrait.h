#pragma once
#include "CoreMinimal.h"
#include "SpawnTableEntry.h"
#include "Templates/SubclassOf.h"
#include "SpawnTableTrait.generated.h"

class UTrait;

UCLASS(Blueprintable)
class REMNANT_API USpawnTableTrait : public USpawnTableEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTrait> TraitBP;
    
    USpawnTableTrait();
};

