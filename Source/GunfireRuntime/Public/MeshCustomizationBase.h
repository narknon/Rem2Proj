#pragma once
#include "CoreMinimal.h"
#include "SceneCustomization.h"
#include "MeshCustomizationBase.generated.h"

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API UMeshCustomizationBase : public USceneCustomization {
    GENERATED_BODY()
public:
    UMeshCustomizationBase();
};

