#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AccountAwardInstance.generated.h"

class UAccountAward;

USTRUCT(BlueprintType)
struct FAccountAwardInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAccountAward> AccountAward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bHasBeenAwarded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInitialAward;
    
    REMNANT_API FAccountAwardInstance();
};

