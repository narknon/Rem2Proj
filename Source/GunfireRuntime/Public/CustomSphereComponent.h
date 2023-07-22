#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "CustomSphereComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UCustomSphereComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UCustomSphereComponent();
};

