#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AITacticalPointDebugComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UAITacticalPointDebugComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAITacticalPointDebugComponent();
};

