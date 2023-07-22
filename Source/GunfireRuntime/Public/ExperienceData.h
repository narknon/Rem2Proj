#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ExperienceData.generated.h"

USTRUCT(BlueprintType)
struct FExperienceData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredExperience;
    
    GUNFIRERUNTIME_API FExperienceData();
};

