#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "AIDataRenderingComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UAIDataRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UAIDataRenderingComponent();
};

