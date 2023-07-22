#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HierarchicalEditInterface.h"
#include "SequencerShotGroup.generated.h"

class USequencerShotEntry;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API USequencerShotGroup : public UObject, public IHierarchicalEditInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USequencerShotEntry*> ShotEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroupPlaybackSpeedOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TargetTypes;
    
    USequencerShotGroup();
    
    // Fix for true pure virtual functions not being implemented
};

