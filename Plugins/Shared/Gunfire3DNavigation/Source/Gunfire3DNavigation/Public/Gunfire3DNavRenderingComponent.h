#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "Gunfire3DNavRenderingComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRE3DNAVIGATION_API UGunfire3DNavRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UGunfire3DNavRenderingComponent();
};

