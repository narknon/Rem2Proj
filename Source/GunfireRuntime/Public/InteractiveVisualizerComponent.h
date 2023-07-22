#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractiveVisualizerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UInteractiveVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UInteractiveVisualizerComponent();
};

