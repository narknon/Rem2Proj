#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "EInitialFacing.h"
#include "InitialFacingDecorator.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UInitialFacingDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInitialFacing InitialFacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FacingOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EasesIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EaseExponent;
    
    UInitialFacingDecorator();
};

