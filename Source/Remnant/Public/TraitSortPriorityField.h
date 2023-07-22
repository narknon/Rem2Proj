#pragma once
#include "CoreMinimal.h"
#include "ETraitSortType.h"
#include "TraitSortPriorityField.generated.h"

USTRUCT(BlueprintType)
struct FTraitSortPriorityField {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETraitSortType SortType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortPriority;
    
    REMNANT_API FTraitSortPriorityField();
};

