#pragma once
#include "CoreMinimal.h"
#include "FlyCameraState.h"
#include "RemnantFlyCameraState.generated.h"

class AActor;

UCLASS(Blueprintable)
class REMNANT_API URemnantFlyCameraState : public UFlyCameraState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* PreviousLockActor;
    
public:
    URemnantFlyCameraState();
};

