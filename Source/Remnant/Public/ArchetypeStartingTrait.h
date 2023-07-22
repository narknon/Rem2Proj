#pragma once
#include "CoreMinimal.h"
#include "ArchetypeStartingTrait.generated.h"

class UTrait;

USTRUCT(BlueprintType)
struct FArchetypeStartingTrait {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTrait> Trait;
    
    REMNANT_API FArchetypeStartingTrait();
};

