#pragma once
#include "CoreMinimal.h"
#include "EGunfireOnlineEvent.h"
#include "ETechReqStatusChange.h"
#include "Blueprint/UserWidget.h"
#include "NotificationWidget.generated.h"

class APlayerControllerGunfire;
class AUIHud;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UNotificationWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UNotificationWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMessageTextEvent(const FText& Heading, const FText& Body);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStatusChangeEvent(ETechReqStatusChange StatusChangeEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnOnlineFailEvent(EGunfireOnlineEvent OnlineFailEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnInputModeChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnHudVisibilityChanged(AUIHud* HUD, bool Visible);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDismissed(UWidget* Unused);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCinematic(APlayerControllerGunfire* Player, bool bIsInCinematicMode);
    
};

