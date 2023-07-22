#pragma once
#include "CoreMinimal.h"
#include "AnimationHandle.generated.h"

class UAnimInstanceGunfire;
class UAnimMontage;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FAnimationHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimInstanceGunfire* AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimLength;
    
    FAnimationHandle();
};

