#include "GunfireOnlineFriends.h"

void UGunfireOnlineFriends::UpdateFriendsList() {
}

void UGunfireOnlineFriends::RejectInvite(const FString& FriendId) {
}

void UGunfireOnlineFriends::RefreshFriendDetails(const FString& FriendId) {
}

void UGunfireOnlineFriends::OnUserLoginChanged(bool IsLoggedIn, int32 UserId, int32 UserIndex) {
}

bool UGunfireOnlineFriends::JoinSessionInvite() {
    return false;
}

bool UGunfireOnlineFriends::IsFindingSessions() const {
    return false;
}

void UGunfireOnlineFriends::InviteFriend(FOnlineFriendDetails FriendDetails) {
}

bool UGunfireOnlineFriends::HasSessionInvite() {
    return false;
}

UGunfireOnlineFriends* UGunfireOnlineFriends::GetGunfireOnlineFriends(const UObject* WorldContextObject) {
    return NULL;
}

TArray<FOnlineFriendDetails> UGunfireOnlineFriends::GetFriendsList() {
    return TArray<FOnlineFriendDetails>();
}

FOnlineFriendDetails UGunfireOnlineFriends::GetFriendDetails(const FString& FriendId) {
    return FOnlineFriendDetails{};
}

void UGunfireOnlineFriends::FindJoinableFriendSessions() {
}

void UGunfireOnlineFriends::ClearInvites() {
}

bool UGunfireOnlineFriends::AcceptInvite(const FString& FriendId, bool SuppressNotifications) {
    return false;
}

UGunfireOnlineFriends::UGunfireOnlineFriends() {
}

