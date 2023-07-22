#pragma once
#include "CoreMinimal.h"
#include "QuestTileDependency.generated.h"

USTRUCT(BlueprintType)
struct REMNANT_API FQuestTileDependency {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RelativeTileNameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDistance;
    
    FQuestTileDependency();
};

