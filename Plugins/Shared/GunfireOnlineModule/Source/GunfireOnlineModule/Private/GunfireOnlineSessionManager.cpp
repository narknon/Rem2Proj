#include "GunfireOnlineSessionManager.h"

void UGunfireOnlineSessionManager::UpdateSession() {
}

void UGunfireOnlineSessionManager::ShowSessionGamertagInfo(FBlueprintSessionResult SessionInfo) {
}

void UGunfireOnlineSessionManager::SetSessionJoinability(bool IsJoinable) {
}

void UGunfireOnlineSessionManager::OnPostGameplayMainMenuLoaded() {
}

void UGunfireOnlineSessionManager::KickPlayer(APlayerController* PlayerController, bool Banned) {
}

bool UGunfireOnlineSessionManager::JoinSession(const FBlueprintSessionResult& SearchResult, bool SuppressNotifications) {
    return false;
}

bool UGunfireOnlineSessionManager::IsSessionValid() {
    return false;
}

bool UGunfireOnlineSessionManager::IsOnline() {
    return false;
}

bool UGunfireOnlineSessionManager::IsJoiningSession() const {
    return false;
}

bool UGunfireOnlineSessionManager::IsCurrentSession(FBlueprintSessionResult InSession) {
    return false;
}

bool UGunfireOnlineSessionManager::HasPlayerBeenBanned(const FUniqueNetIdRepl& UniqueNetId) {
    return false;
}

FSessionDetails UGunfireOnlineSessionManager::GetSessionDetails(const FBlueprintSessionResult& Session) {
    return FSessionDetails{};
}

TArray<FSessionDetails> UGunfireOnlineSessionManager::GetRecentlyJoinedSessions() {
    return TArray<FSessionDetails>();
}

UGunfireOnlineSessionManager* UGunfireOnlineSessionManager::GetGunfireOnlineSessionManager(const UObject* WorldContextObject) {
    return NULL;
}

void UGunfireOnlineSessionManager::DestroySession(EOnlineSubsystemServiceType Type) {
}

void UGunfireOnlineSessionManager::CreateSession(EOnlineSessionType NewSessionType) {
}

void UGunfireOnlineSessionManager::ChangeSession(EOnlineSessionType NewSessionType) {
}

EOnlineCanJoinResult UGunfireOnlineSessionManager::CanPlayerJoinSession(const FUniqueNetIdRepl& UniqueId) {
    return EOnlineCanJoinResult::Success;
}

bool UGunfireOnlineSessionManager::CanChangeSessiontype() {
    return false;
}

UGunfireOnlineSessionManager::UGunfireOnlineSessionManager() {
    this->SessionType = EOnlineSessionType::Offline;
}

