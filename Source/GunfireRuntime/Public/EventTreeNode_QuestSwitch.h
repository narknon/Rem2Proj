#pragma once
#include "CoreMinimal.h"
#include "EventTreeNode_Branch.h"
#include "EventTreeNode_QuestSwitch.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UEventTreeNode_QuestSwitch : public UEventTreeNode_Branch {
    GENERATED_BODY()
public:
    UEventTreeNode_QuestSwitch();
};

