#pragma once
#include "CoreMinimal.h"
#include "ConditionalAnimNotify.h"
#include "AnimNotify_UpdateDynamics.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class GUNFIRERUNTIME_API UAnimNotify_UpdateDynamics : public UConditionalAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Pause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Reset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Teleport;
    
    UAnimNotify_UpdateDynamics();
};

