#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PersistentBuff.generated.h"

USTRUCT(BlueprintType)
struct REMNANT_API FPersistentBuff {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSoftClassPath ActionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float RemainingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    FPersistentBuff();
};

