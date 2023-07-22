#pragma once
#include "CoreMinimal.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "Gunfire3DNavigationQueryFilter.generated.h"

UCLASS(Abstract, Blueprintable)
class GUNFIRE3DNAVIGATION_API UGunfire3DNavigationQueryFilter : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxPathSearchNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathHeuristicScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NodeBaseTraversalCost;
    
    UGunfire3DNavigationQueryFilter();
};

