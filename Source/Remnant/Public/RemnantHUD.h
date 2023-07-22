#pragma once
#include "CoreMinimal.h"
#include "ENotificationType.h"
#include "UIHud.h"
#include "Templates/SubclassOf.h"
#include "RemnantHUD.generated.h"

class AActor;
class AItem;
class APlayerGunfire;
class AUIActor;
class UObject;
class UTrait;
class UWidget;

UCLASS(Blueprintable, NonTransient)
class REMNANT_API ARemnantHUD : public AUIHud {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ContextActor;
    
    ARemnantHUD();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AUIActor* ShowUtilityRadial();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowLoading(bool Show);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AUIActor* ShowJoinSpectateScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AUIActor* ShowInGameMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AUIActor* ShowDeathScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AUIActor* ShowConsumableRadial();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AUIActor* ShowCinematicMenu(UObject* Cinematic, const TArray<APlayerGunfire*>& RelevantPlayers, AActor* MenuInstigator);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowSubtitles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowHealthBars() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveCheckpointNotification(FName NameID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void QueueNotification(ENotificationType Type, TSubclassOf<UTrait> Trait, const FText& Text, const FText& Prompt, TSubclassOf<AItem> ItemBP, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopPendingTravel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartPendingTravel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsLoadingScreenFinishedTransitioning();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsCheckpointNotificationActive(FName NameID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInvalidDialog() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* GetHudWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeAudioOut(FName Reason, bool Instant, bool FadeAudio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeAudioIn(FName Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnteringZoneAnimation(const FText& ZoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearAllCheckpointNotifications();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddCheckpointNotification(FName NameID, float TimeOverride);
    
};

