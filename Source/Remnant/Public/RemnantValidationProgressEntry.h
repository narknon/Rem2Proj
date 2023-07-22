#pragma once
#include "CoreMinimal.h"
#include "EQuantityValidationType.h"
#include "ValidationTableEntry.h"
#include "RemnantValidationProgressEntry.generated.h"

UCLASS(Blueprintable)
class REMNANT_API URemnantValidationProgressEntry : public UValidationTableEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuantityValidationType ExperienceValidation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuantityValidationType LevelValidation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ValidateExperienceOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxExperienceChangeOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExperienceChangeTimeOutSeconds;
    
    URemnantValidationProgressEntry();
};

