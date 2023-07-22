#pragma once
#include "CoreMinimal.h"
#include "CameraShotNodeEntryData.h"
#include "EventTreeNode.h"
#include "EventTreeNode_StageShot.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UEventTreeNode_StageShot : public UEventTreeNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraShotNodeEntryData CameraShotDetails;
    
    UEventTreeNode_StageShot();
};

