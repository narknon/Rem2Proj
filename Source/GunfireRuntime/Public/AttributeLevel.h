#pragma once
#include "CoreMinimal.h"
#include "AttributeLevel.generated.h"

USTRUCT(BlueprintType)
struct FAttributeLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    GUNFIRERUNTIME_API FAttributeLevel();
};

