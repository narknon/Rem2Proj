#pragma once
#include "CoreMinimal.h"
#include "ESequenceOriginLocationOverride.h"
#include "CameraShotNodeEntryData.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FCameraShotNodeEntryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SequenceShotNameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESequenceOriginLocationOverride TargetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShotDialogObjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreViewTargetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreViewTargetTransform;
    
    FCameraShotNodeEntryData();
};

