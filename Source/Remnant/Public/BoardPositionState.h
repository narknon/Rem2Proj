#pragma once
#include "CoreMinimal.h"
#include "WeightedGraphNode.h"
#include "BoardPositionInfo.h"
#include "BoardPositionState.generated.h"

UCLASS(Blueprintable)
class REMNANT_API UBoardPositionState : public UWeightedGraphNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBoardPositionInfo BoardSlotInfo;
    
    UBoardPositionState();
};

