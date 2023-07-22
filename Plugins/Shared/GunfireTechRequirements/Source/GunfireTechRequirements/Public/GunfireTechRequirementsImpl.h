#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameFramework/OnlineReplStructs.h"
#include "ActiveControllerSetDelegate.h"
#include "ActiveProfileLostDelegate.h"
#include "ActiveProfileSetDelegate.h"
#include "ControllerConnChangedDelegate.h"
#include "EOnlineActivityOutcomeBP.h"
#include "EPresenceContent.h"
#include "ETechReqStatusChange.h"
#include "FullGameAvailableEventDelegateDelegate.h"
#include "GameActivityRequestedDelegate.h"
#include "NetworkConnChangedDelegate.h"
#include "OnDLCEntitlementsUpdatedDelegate.h"
#include "OnDLCInstallFinishedDelegate.h"
#include "OnLegalCompleteDelegate.h"
#include "OnMainMenuLoadedDelegate.h"
#include "OnShowStatusEventMessageDelegate.h"
#include "OnWaitDialogDelegate.h"
#include "OnlinePrivilegeCheckedDelegateDelegate.h"
#include "QuitToMainMenuDelegate.h"
#include "StatusEventMessageAddedDelegate.h"
#include "GunfireTechRequirementsImpl.generated.h"

class APlayerController;
class UGunfireTechRequirementsImpl;
class UObject;

UCLASS(Blueprintable)
class GUNFIRETECHREQUIREMENTS_API UGunfireTechRequirementsImpl : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFullGameAvailableEventDelegate OnFullGameAvailable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerConnChanged OnControllerConnectionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveControllerSet OnActiveControllerSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveProfileSet OnActiveProfileSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetworkConnChanged OnOnlineUnavailable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlinePrivilegeCheckedDelegate OnOnlinePrivilegeChecked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuitToMainMenu OnQuitToMainMenu;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMainMenuLoaded OnMainMenuLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWaitDialog OnWaitDialog;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveProfileLost OnActiveProfileLost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDLCInstallFinished OnDLCInstallFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLegalComplete OnLegalComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDLCEntitlementsUpdated OnDLCEntitlementsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowStatusEventMessage OnShowStatusEventMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatusEventMessageAdded OnStatusEventMessageAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowStatusEventMessage OnShowStatusToastMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameActivityRequested OnGameActivityRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETechReqStatusChange> StatusChangeEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CustomStatusChangeMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETechReqStatusChange NetworkFailReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETechReqStatusChange PrivilegeFailReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSeenLegalScreen;
    
    UGunfireTechRequirementsImpl();
    UFUNCTION(BlueprintCallable)
    void ShowSwitchPlatformGameProfile();
    
    UFUNCTION(BlueprintCallable)
    void ShowStatusChangedEventMessage(ETechReqStatusChange Event);
    
    UFUNCTION(BlueprintCallable)
    void ShowPlayerGamertagInfo(const FUniqueNetIdRepl& UniqueId);
    
    UFUNCTION(BlueprintCallable)
    void SetVoipEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetUsingMultiplayerFeatures(bool IsUsing);
    
    UFUNCTION(BlueprintCallable)
    void SetPresenceLocation(EPresenceContent Location);
    
    UFUNCTION(BlueprintCallable)
    void SetHasSeenLegalScreen();
    
    UFUNCTION(BlueprintCallable)
    void SetActiveController(APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void MuteVOIP(bool bMute);
    
    UFUNCTION(BlueprintCallable)
    void MainMenuLoaded();
    
    UFUNCTION(BlueprintCallable)
    bool IsVoipPTTEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsVoipMuted();
    
    UFUNCTION(BlueprintCallable)
    bool IsVoipEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingMultiplayerFeatures();
    
    UFUNCTION(BlueprintCallable)
    bool IsProfileValid();
    
    UFUNCTION(BlueprintCallable)
    bool IsPremiumServiceAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoggedIn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullGameAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrossplayEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsControllerConnected();
    
    UFUNCTION(BlueprintCallable)
    bool IsChatRestricted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLicense(const FString& License) const;
    
    UFUNCTION(BlueprintCallable)
    bool HasCheckedOnlinePrivilege();
    
    UFUNCTION(BlueprintCallable)
    EPresenceContent GetPresenceLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlatformGameProfileUserName();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetLicensedContent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGunfireTechRequirementsImpl* GetGunfireTechRequirementsImpl(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void EnableVoipPTT(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void CheckOnlinePrivilege();
    
    UFUNCTION(BlueprintCallable)
    void CheckOnlineCommunicationPrivilege();
    
    UFUNCTION(BlueprintCallable)
    void AddStatusChangedEvent(ETechReqStatusChange Event, const FString& CustomMessage);
    
    UFUNCTION(BlueprintCallable)
    void ActivityStart(const FString& ActivityId);
    
    UFUNCTION(BlueprintCallable)
    void ActivitySetAvailability(const FString& ActivityId, bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void ActivityResume(const FString& ActivityId, const TArray<FString>& InProgressTasks, const TArray<FString>& CompletedTasks);
    
    UFUNCTION(BlueprintCallable)
    void ActivityResetAll();
    
    UFUNCTION(BlueprintCallable)
    void ActivityEnd(const FString& ActivityId, EOnlineActivityOutcomeBP Outcome);
    
};

