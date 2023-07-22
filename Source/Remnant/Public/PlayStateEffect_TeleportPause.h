#pragma once
#include "CoreMinimal.h"
#include "PlayStateEffect.h"
#include "PlayStateEffect_TeleportPause.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class REMNANT_API UPlayStateEffect_TeleportPause : public UPlayStateEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitForTeleport;
    
public:
    UPlayStateEffect_TeleportPause();
};

