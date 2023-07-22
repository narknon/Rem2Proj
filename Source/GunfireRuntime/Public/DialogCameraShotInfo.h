#pragma once
#include "CoreMinimal.h"
#include "DialogCameraShotInfo.generated.h"

class AActor;
class USequencerShotEntry;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FDialogCameraShotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USequencerShotEntry* ShotEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreViewTargetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreViewTargetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TargetLocalPlayer;
    
    FDialogCameraShotInfo();
};

