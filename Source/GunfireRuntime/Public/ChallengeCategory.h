#pragma once
#include "CoreMinimal.h"
#include "ChallengeCategory.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FChallengeCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BackgroundImage;
    
    FChallengeCategory();
};

