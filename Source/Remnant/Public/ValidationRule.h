#pragma once
#include "CoreMinimal.h"
#include "ValidationRule.generated.h"

class UValidationTableEntry;

USTRUCT(BlueprintType)
struct REMNANT_API FValidationRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UValidationTableEntry* ValidationEntry;
    
    FValidationRule();
};

