#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "GameViewportFocusDelegateDelegate.h"
#include "GameViewportClientGunfire.generated.h"

class UCameraComponent;

UCLASS(Blueprintable, NonTransient)
class GUNFIRERUNTIME_API UGameViewportClientGunfire : public UGameViewportClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameViewportFocusDelegate OnGameViewportFocusEvent;
    
    UGameViewportClientGunfire();
    UFUNCTION(BlueprintCallable)
    void AdjustCameraFoVForAspect(bool bIgnoreFovSlider, UCameraComponent* CameraComponent);
    
};

