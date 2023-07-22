#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FindSessionsCallbackProxy.h"
#include "EOnlineCanJoinResult.h"
#include "EOnlineSessionType.h"
#include "EOnlineSubsystemServiceType.h"
#include "GunfireOnlineSubsystemBase.h"
#include "OnOnlineSessionStateFailDelegate.h"
#include "OnRegisterPlayerDelegate.h"
#include "SessionDetails.h"
#include "GunfireOnlineSessionManager.generated.h"

class APlayerController;
class UGunfireOnlineSessionManager;
class UObject;

UCLASS(Blueprintable)
class GUNFIREONLINEMODULE_API UGunfireOnlineSessionManager : public UGunfireOnlineSubsystemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSessionCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSessionStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSessionEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnStartedJoiningSession;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSessionJoined;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSessionJoinAttemptsFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionStateFail OnStateFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRegisterPlayer OnRegisterPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRegisterPlayer OnUnregisterPlayer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOnlineSessionType SessionType;
    
public:
    UGunfireOnlineSessionManager();
    UFUNCTION(BlueprintCallable)
    void UpdateSession();
    
    UFUNCTION(BlueprintCallable)
    void ShowSessionGamertagInfo(FBlueprintSessionResult SessionInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetSessionJoinability(bool IsJoinable);
    
    UFUNCTION(BlueprintCallable)
    void OnPostGameplayMainMenuLoaded();
    
    UFUNCTION(BlueprintCallable)
    void KickPlayer(APlayerController* PlayerController, bool Banned);
    
    UFUNCTION(BlueprintCallable)
    bool JoinSession(const FBlueprintSessionResult& SearchResult, bool SuppressNotifications);
    
    UFUNCTION(BlueprintCallable)
    bool IsSessionValid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnline();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJoiningSession() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCurrentSession(FBlueprintSessionResult InSession);
    
    UFUNCTION(BlueprintCallable)
    bool HasPlayerBeenBanned(const FUniqueNetIdRepl& UniqueNetId);
    
    UFUNCTION(BlueprintCallable)
    FSessionDetails GetSessionDetails(const FBlueprintSessionResult& Session);
    
    UFUNCTION(BlueprintCallable)
    TArray<FSessionDetails> GetRecentlyJoinedSessions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGunfireOnlineSessionManager* GetGunfireOnlineSessionManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void DestroySession(EOnlineSubsystemServiceType Type);
    
    UFUNCTION(BlueprintCallable)
    void CreateSession(EOnlineSessionType NewSessionType);
    
    UFUNCTION(BlueprintCallable)
    void ChangeSession(EOnlineSessionType NewSessionType);
    
    UFUNCTION(BlueprintCallable)
    EOnlineCanJoinResult CanPlayerJoinSession(const FUniqueNetIdRepl& UniqueId);
    
    UFUNCTION(BlueprintCallable)
    bool CanChangeSessiontype();
    
};

