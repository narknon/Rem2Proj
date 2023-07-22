#pragma once
#include "CoreMinimal.h"
#include "GraphNode.generated.h"

class UWeightedGraphComponent;
class UWeightedGraphNode;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FGraphNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWeightedGraphNode* GraphNodeInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWeightedGraphComponent* OwningGraph;
    
    FGraphNode();
};

