#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESequenceOriginLocationOverride.h"
#include "HierarchicalEditInterface.h"
#include "SequencerShotEntry.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API USequencerShotEntry : public UObject, public IHierarchicalEditInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESequenceOriginLocationOverride TargetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShotDialogObjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaybackSpeedOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaybackStartTimeEndRange;
    
    USequencerShotEntry();
    
    // Fix for true pure virtual functions not being implemented
};

