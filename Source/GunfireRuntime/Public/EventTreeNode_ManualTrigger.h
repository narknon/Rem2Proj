#pragma once
#include "CoreMinimal.h"
#include "EventTreeNode_List.h"
#include "EventTreeNode_ManualTrigger.generated.h"

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API UEventTreeNode_ManualTrigger : public UEventTreeNode_List {
    GENERATED_BODY()
public:
    UEventTreeNode_ManualTrigger();
};

