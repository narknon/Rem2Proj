#pragma once
#include "CoreMinimal.h"
#include "InheritableObject.h"
#include "InheritableAsset.generated.h"

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API UInheritableAsset : public UInheritableObject {
    GENERATED_BODY()
public:
    UInheritableAsset();
};

