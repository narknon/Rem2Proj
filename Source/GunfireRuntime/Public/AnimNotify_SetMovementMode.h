#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "StateTransientAnimNotify.h"
#include "AnimNotify_SetMovementMode.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class GUNFIRERUNTIME_API UAnimNotify_SetMovementMode : public UStateTransientAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStateTransient;
    
public:
    UAnimNotify_SetMovementMode();
};

