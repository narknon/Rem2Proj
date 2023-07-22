#pragma once
#include "CoreMinimal.h"
#include "AnimationLayerInputs.h"
#include "AnimationLayerOutputs.h"
#include "AnimationLayer.generated.h"

class UAnimMontage;
class UAnimationNamed;
class UAnimationSet;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FAnimationLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationSet* AnimationSet;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimationMontageSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationLayerInputs LayerInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationLayerOutputs LayerOutputs;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> Montages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAnimationNamed*> TransientAnimations;
    
public:
    FAnimationLayer();
};

