#pragma once
#include "CoreMinimal.h"
#include "CinematicTransitionParams.h"
#include "EventTreeNode_Cinematic_Base.h"
#include "EventTreeNode_LevelSequence.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UEventTreeNode_LevelSequence : public UEventTreeNode_Cinematic_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinematicTransitionParams CinematicTransitionParams;
    
    UEventTreeNode_LevelSequence();
};

