#pragma once
#include "CoreMinimal.h"
#include "HoudiniAssetComponent.h"
#include "HDAComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHDAComponent : public UHoudiniAssetComponent {
    GENERATED_BODY()
public:
    UHDAComponent();
};

