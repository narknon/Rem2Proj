#pragma once
#include "CoreMinimal.h"
#include "EBoardUser.h"
#include "BoardUserInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct REMNANT_API FBoardUserInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBoardUser CurrentPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* PieceActor;
    
    FBoardUserInfo();
};

