#pragma once
#include "CoreMinimal.h"
#include "StateCameraComponent.h"
#include "RemnantStateCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REMNANT_API URemnantStateCameraComponent : public UStateCameraComponent {
    GENERATED_BODY()
public:
    URemnantStateCameraComponent();
};

