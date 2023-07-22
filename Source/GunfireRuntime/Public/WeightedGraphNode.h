#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WeightedGraphNode.generated.h"

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API UWeightedGraphNode : public UObject {
    GENERATED_BODY()
public:
    UWeightedGraphNode();
};

