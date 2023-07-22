#pragma once
#include "CoreMinimal.h"
#include "StateTransientAnimNotifyState.h"
#include "AnimNotifyState_StateWindow.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class GUNFIRERUNTIME_API UAnimNotifyState_StateWindow : public UStateTransientAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Window;
    
    UAnimNotifyState_StateWindow();
};

