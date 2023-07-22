#pragma once
#include "CoreMinimal.h"
#include "PlayStateEffect.h"
#include "PlayStateEffect_HideHUD.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UPlayStateEffect_HideHUD : public UPlayStateEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHUDIsVisible;
    
public:
    UPlayStateEffect_HideHUD();
};

