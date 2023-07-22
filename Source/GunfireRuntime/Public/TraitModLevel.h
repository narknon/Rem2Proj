#pragma once
#include "CoreMinimal.h"
#include "ETraitPointModType.h"
#include "TraitModLevel.generated.h"

USTRUCT(BlueprintType)
struct FTraitModLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETraitPointModType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Level;
    
    GUNFIRERUNTIME_API FTraitModLevel();
};

