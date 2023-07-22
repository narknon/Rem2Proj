#pragma once
#include "CoreMinimal.h"
#include "ConditionalAnimNotify.h"
#include "AnimNotify_ScaleGravity.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class GUNFIRERUNTIME_API UAnimNotify_ScaleGravity : public UConditionalAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityScale;
    
public:
    UAnimNotify_ScaleGravity();
};

