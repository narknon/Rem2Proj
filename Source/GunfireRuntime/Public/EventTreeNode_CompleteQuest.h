#pragma once
#include "CoreMinimal.h"
#include "EQuestResult.h"
#include "EventTreeNode.h"
#include "EventTreeNode_CompleteQuest.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UEventTreeNode_CompleteQuest : public UEventTreeNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestResult Result;
    
    UEventTreeNode_CompleteQuest();
};

