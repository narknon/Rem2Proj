#pragma once
#include "CoreMinimal.h"
#include "FoliageInstancedStaticMeshComponent.h"
#include "UIPFInstancedStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UIPF_API UUIPFInstancedStaticMeshComponent : public UFoliageInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UUIPFInstancedStaticMeshComponent();
};

