#pragma once
#include "CoreMinimal.h"
#include "DifficultyScalingComponent.h"
#include "RemnantDifficultyScalingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REMNANT_API URemnantDifficultyScalingComponent : public UDifficultyScalingComponent {
    GENERATED_BODY()
public:
    URemnantDifficultyScalingComponent();
};

