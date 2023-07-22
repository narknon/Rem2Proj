#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PossessableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UPossessableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPossessableComponent();
};

