#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AITacticalGraphNodeVisualizerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REMNANT_API UAITacticalGraphNodeVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAITacticalGraphNodeVisualizerComponent();
};

