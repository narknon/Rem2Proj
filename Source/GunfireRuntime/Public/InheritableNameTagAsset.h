#pragma once
#include "CoreMinimal.h"
#include "InheritableNamedAsset.h"
#include "InheritableNameTagAsset.generated.h"

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API UInheritableNameTagAsset : public UInheritableNamedAsset {
    GENERATED_BODY()
public:
    UInheritableNameTagAsset();
};

