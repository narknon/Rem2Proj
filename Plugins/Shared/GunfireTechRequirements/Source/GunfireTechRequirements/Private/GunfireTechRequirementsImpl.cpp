#include "GunfireTechRequirementsImpl.h"

void UGunfireTechRequirementsImpl::ShowSwitchPlatformGameProfile() {
}

void UGunfireTechRequirementsImpl::ShowStatusChangedEventMessage(ETechReqStatusChange Event) {
}

void UGunfireTechRequirementsImpl::ShowPlayerGamertagInfo(const FUniqueNetIdRepl& UniqueId) {
}

void UGunfireTechRequirementsImpl::SetVoipEnabled(bool Enabled) {
}

void UGunfireTechRequirementsImpl::SetUsingMultiplayerFeatures(bool IsUsing) {
}

void UGunfireTechRequirementsImpl::SetPresenceLocation(EPresenceContent Location) {
}

void UGunfireTechRequirementsImpl::SetHasSeenLegalScreen() {
}

void UGunfireTechRequirementsImpl::SetActiveController(APlayerController* Controller) {
}

void UGunfireTechRequirementsImpl::MuteVOIP(bool bMute) {
}

void UGunfireTechRequirementsImpl::MainMenuLoaded() {
}

bool UGunfireTechRequirementsImpl::IsVoipPTTEnabled() {
    return false;
}

bool UGunfireTechRequirementsImpl::IsVoipMuted() {
    return false;
}

bool UGunfireTechRequirementsImpl::IsVoipEnabled() {
    return false;
}

bool UGunfireTechRequirementsImpl::IsUsingMultiplayerFeatures() {
    return false;
}

bool UGunfireTechRequirementsImpl::IsProfileValid() {
    return false;
}

bool UGunfireTechRequirementsImpl::IsPremiumServiceAvailable() {
    return false;
}

bool UGunfireTechRequirementsImpl::IsLoggedIn() const {
    return false;
}

bool UGunfireTechRequirementsImpl::IsFullGameAvailable() const {
    return false;
}

bool UGunfireTechRequirementsImpl::IsCrossplayEnabled() {
    return false;
}

bool UGunfireTechRequirementsImpl::IsControllerConnected() {
    return false;
}

bool UGunfireTechRequirementsImpl::IsChatRestricted() {
    return false;
}

bool UGunfireTechRequirementsImpl::HasLicense(const FString& License) const {
    return false;
}

bool UGunfireTechRequirementsImpl::HasCheckedOnlinePrivilege() {
    return false;
}

EPresenceContent UGunfireTechRequirementsImpl::GetPresenceLocation() {
    return EPresenceContent::MENU;
}

FString UGunfireTechRequirementsImpl::GetPlatformGameProfileUserName() {
    return TEXT("");
}

TArray<FString> UGunfireTechRequirementsImpl::GetLicensedContent() {
    return TArray<FString>();
}

UGunfireTechRequirementsImpl* UGunfireTechRequirementsImpl::GetGunfireTechRequirementsImpl(const UObject* WorldContextObject) {
    return NULL;
}

void UGunfireTechRequirementsImpl::EnableVoipPTT(bool Enabled) {
}

void UGunfireTechRequirementsImpl::CheckOnlinePrivilege() {
}

void UGunfireTechRequirementsImpl::CheckOnlineCommunicationPrivilege() {
}

void UGunfireTechRequirementsImpl::AddStatusChangedEvent(ETechReqStatusChange Event, const FString& CustomMessage) {
}

void UGunfireTechRequirementsImpl::ActivityStart(const FString& ActivityId) {
}

void UGunfireTechRequirementsImpl::ActivitySetAvailability(const FString& ActivityId, bool Enabled) {
}

void UGunfireTechRequirementsImpl::ActivityResume(const FString& ActivityId, const TArray<FString>& InProgressTasks, const TArray<FString>& CompletedTasks) {
}

void UGunfireTechRequirementsImpl::ActivityResetAll() {
}

void UGunfireTechRequirementsImpl::ActivityEnd(const FString& ActivityId, EOnlineActivityOutcomeBP Outcome) {
}

UGunfireTechRequirementsImpl::UGunfireTechRequirementsImpl() {
    this->NetworkFailReason = ETechReqStatusChange::Normal;
    this->PrivilegeFailReason = ETechReqStatusChange::Normal;
    this->bHasSeenLegalScreen = false;
}

