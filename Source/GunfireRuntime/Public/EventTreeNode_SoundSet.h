#pragma once
#include "CoreMinimal.h"
#include "EventTreeNode_SoundBase.h"
#include "EventTreeNode_SoundSet.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UEventTreeNode_SoundSet : public UEventTreeNode_SoundBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SoundIDName;
    
    UEventTreeNode_SoundSet();
};

