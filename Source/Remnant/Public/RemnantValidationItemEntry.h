#pragma once
#include "CoreMinimal.h"
#include "EQuantityValidationType.h"
#include "ValidationTableEntry.h"
#include "RemnantValidationItemEntry.generated.h"

UCLASS(Abstract, Blueprintable)
class REMNANT_API URemnantValidationItemEntry : public UValidationTableEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuantityValidationType QuantityValidation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuantityValidationType LevelValidation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ValidateOverTimeOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ValidateQuantityOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxQuantityChangeOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuantityChangeTimeOutSeconds;
    
    URemnantValidationItemEntry();
};

