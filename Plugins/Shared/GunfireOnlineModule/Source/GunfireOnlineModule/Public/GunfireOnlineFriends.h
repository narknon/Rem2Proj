#pragma once
#include "CoreMinimal.h"
#include "GunfireOnlineSubsystemBase.h"
#include "OnOnlineFriendUpdatedDelegate.h"
#include "OnOnlineFriendsListCompleteDelegate.h"
#include "OnOnlineFriendsListFailDelegate.h"
#include "OnOnlineInviteReceivedDelegate.h"
#include "OnOnlineSessionsFoundDelegate.h"
#include "OnlineFriendDetails.h"
#include "GunfireOnlineFriends.generated.h"

class UGunfireOnlineFriends;
class UObject;

UCLASS(Blueprintable)
class GUNFIREONLINEMODULE_API UGunfireOnlineFriends : public UGunfireOnlineSubsystemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineInviteReceived OnInviteReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineFriendsListComplete OnFriendsListComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineFriendsListFail OnFriendsListFail;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionsFound OnSessionsFound;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineFriendUpdated OnFriendUpdated;
    
    UGunfireOnlineFriends();
    UFUNCTION(BlueprintCallable)
    void UpdateFriendsList();
    
    UFUNCTION(BlueprintCallable)
    void RejectInvite(const FString& FriendId);
    
    UFUNCTION(BlueprintCallable)
    void RefreshFriendDetails(const FString& FriendId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUserLoginChanged(bool IsLoggedIn, int32 UserId, int32 UserIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    bool JoinSessionInvite();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFindingSessions() const;
    
    UFUNCTION(BlueprintCallable)
    void InviteFriend(FOnlineFriendDetails FriendDetails);
    
    UFUNCTION(BlueprintCallable)
    bool HasSessionInvite();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGunfireOnlineFriends* GetGunfireOnlineFriends(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    TArray<FOnlineFriendDetails> GetFriendsList();
    
    UFUNCTION(BlueprintCallable)
    FOnlineFriendDetails GetFriendDetails(const FString& FriendId);
    
    UFUNCTION(BlueprintCallable)
    void FindJoinableFriendSessions();
    
    UFUNCTION(BlueprintCallable)
    void ClearInvites();
    
    UFUNCTION(BlueprintCallable)
    bool AcceptInvite(const FString& FriendId, bool SuppressNotifications);
    
};

