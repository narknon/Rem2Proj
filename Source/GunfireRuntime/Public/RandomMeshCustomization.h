#pragma once
#include "CoreMinimal.h"
#include "MeshCustomizationBase.h"
#include "RandomMeshCustomization.generated.h"

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API URandomMeshCustomization : public UMeshCustomizationBase {
    GENERATED_BODY()
public:
    URandomMeshCustomization();
};

