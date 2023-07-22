#pragma once
#include "CoreMinimal.h"
#include "StateTransientAnimNotifyState.h"
#include "AnimNotifyState_TagWindow.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class GUNFIRERUNTIME_API UAnimNotifyState_TagWindow : public UStateTransientAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterTag;
    
    UAnimNotifyState_TagWindow();
};

