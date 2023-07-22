#pragma once
#include "CoreMinimal.h"
#include "RemnantQuestBreadcrumbInfo.generated.h"

USTRUCT(BlueprintType)
struct FRemnantQuestBreadcrumbInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool Visited;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool HasRequirements;
    
    REMNANT_API FRemnantQuestBreadcrumbInfo();
};

