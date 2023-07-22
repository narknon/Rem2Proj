#pragma once
#include "CoreMinimal.h"
#include "ChallengeEvent.h"
#include "EventTreeNode.h"
#include "EventTreeNode_Challenge.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UEventTreeNode_Challenge : public UEventTreeNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengeEvent ChallengeEvent;
    
public:
    UEventTreeNode_Challenge();
};

