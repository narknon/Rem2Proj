#pragma once
#include "CoreMinimal.h"
#include "ConditionalAnimNotifyState.h"
#include "AnimNotifyState_SoundTag.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class GUNFIRERUNTIME_API UAnimNotifyState_SoundTag : public UConditionalAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveAtEnd;
    
    UAnimNotifyState_SoundTag();
};

