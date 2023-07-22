#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TraitOrderRow.generated.h"

class UTrait;

USTRUCT(BlueprintType)
struct REMNANT_API FTraitOrderRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTrait> Trait;
    
    FTraitOrderRow();
};

