#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SplineCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API USplineCameraComponent : public USceneComponent {
    GENERATED_BODY()
public:
    USplineCameraComponent();
};

