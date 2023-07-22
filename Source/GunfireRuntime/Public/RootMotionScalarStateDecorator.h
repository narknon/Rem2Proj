#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "StatValue.h"
#include "RootMotionScalarStateDecorator.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API URootMotionScalarStateDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatValue RootMotionMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatValue RootMotionScalar;
    
    URootMotionScalarStateDecorator();
};

