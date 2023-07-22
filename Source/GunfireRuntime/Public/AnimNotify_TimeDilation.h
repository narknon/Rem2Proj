#pragma once
#include "CoreMinimal.h"
#include "StateTransientAnimNotify.h"
#include "AnimNotify_TimeDilation.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class GUNFIRERUNTIME_API UAnimNotify_TimeDilation : public UStateTransientAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Global;
    
public:
    UAnimNotify_TimeDilation();
};

