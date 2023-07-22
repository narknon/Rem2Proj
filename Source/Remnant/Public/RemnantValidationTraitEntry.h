#pragma once
#include "CoreMinimal.h"
#include "EQuantityValidationType.h"
#include "ValidationTableEntry.h"
#include "ETraitValidationType.h"
#include "RemnantValidationTraitEntry.generated.h"

class UTrait;

UCLASS(Blueprintable)
class REMNANT_API URemnantValidationTraitEntry : public UValidationTableEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETraitValidationType TraitValidation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuantityValidationType LevelValidation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTrait> TraitClass;
    
    URemnantValidationTraitEntry();
};

