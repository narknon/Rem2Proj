#pragma once
#include "CoreMinimal.h"
#include "EBoardUser.h"
#include "BoardRules.generated.h"

USTRUCT(BlueprintType)
struct REMNANT_API FBoardRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PiecesPerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBoardUser UserWithFirstMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerHasFirstMoveChance;
    
    FBoardRules();
};

