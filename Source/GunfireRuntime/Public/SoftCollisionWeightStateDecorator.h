#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "SoftCollisionWeightStateDecorator.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API USoftCollisionWeightStateDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoftCollisionWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRestorePreviousWeight;
    
public:
    USoftCollisionWeightStateDecorator();
};

