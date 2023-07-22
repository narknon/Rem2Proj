#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ActorStateDecorator.h"
#include "MovementTypeDecorator.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UMovementTypeDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> NewMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RestoreOnExit;
    
public:
    UMovementTypeDecorator();
};

