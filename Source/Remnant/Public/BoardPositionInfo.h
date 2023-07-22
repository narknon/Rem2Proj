#pragma once
#include "CoreMinimal.h"
#include "BoardUserInfo.h"
#include "BoardPositionInfo.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct REMNANT_API FBoardPositionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoardUserInfo SlotUserInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotAttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsDiagonalMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* SlotPosition;
    
    FBoardPositionInfo();
};

