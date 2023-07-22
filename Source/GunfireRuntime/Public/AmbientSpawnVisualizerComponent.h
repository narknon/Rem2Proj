#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AmbientSpawnVisualizerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UAmbientSpawnVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAmbientSpawnVisualizerComponent();
};

