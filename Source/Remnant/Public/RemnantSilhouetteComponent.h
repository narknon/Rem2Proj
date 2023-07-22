#pragma once
#include "CoreMinimal.h"
#include "SilhouetteComponent.h"
#include "RemnantSilhouetteComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REMNANT_API URemnantSilhouetteComponent : public USilhouetteComponent {
    GENERATED_BODY()
public:
    URemnantSilhouetteComponent();
};

