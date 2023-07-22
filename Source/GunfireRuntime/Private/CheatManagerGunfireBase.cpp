#include "CheatManagerGunfireBase.h"

void UCheatManagerGunfireBase::ToggleFlyCheatWaypointDisplay() {
}

void UCheatManagerGunfireBase::ToggleFlyCheatDialog() {
}

void UCheatManagerGunfireBase::ShowFlyCheatDialog(bool bShowPreview) {
}

void UCheatManagerGunfireBase::RequestShowGlobalCheatDialog() {
}

void UCheatManagerGunfireBase::RequestShowCheatDialog(TSoftClassPtr<AUIActor> SoftDialogClass) {
}

void UCheatManagerGunfireBase::RequestCloseCheatManagerMenu() {
}

void UCheatManagerGunfireBase::OnUseGlobalCheatMenuKey(bool bDown, FInputActionKeyMapping KeyMapping) {
}

void UCheatManagerGunfireBase::OnUseAnyKeyDuringCheat() {
}

void UCheatManagerGunfireBase::OnShowGlobalCheatMenu() {
}

void UCheatManagerGunfireBase::OnReleaseDebugCommandKey() {
}

bool UCheatManagerGunfireBase::IsThumbstick(const FKey Key) {
    return false;
}

bool UCheatManagerGunfireBase::IsGamepadButton(const FKey Key) {
    return false;
}

void UCheatManagerGunfireBase::HideFlyCheatDialog(bool ShowPreview) {
}

FText UCheatManagerGunfireBase::GetKeyDisplayShortName(const FKey Key) {
    return FText::GetEmpty();
}

TArray<FCheatActionCategory> UCheatManagerGunfireBase::GetGlobalCheatCategories() {
    return TArray<FCheatActionCategory>();
}

TArray<FCheatInputAction> UCheatManagerGunfireBase::GetFlymodeCheats() {
    return TArray<FCheatInputAction>();
}

bool UCheatManagerGunfireBase::GetExecCheatCommandDetails(const FName ActionName, FCheatCommandDetails& DETAILS) const {
    return false;
}

bool UCheatManagerGunfireBase::GetConsoleCheat(const FName ActionName, FCheatInputAction& Cheat) const {
    return false;
}

bool UCheatManagerGunfireBase::GetCheatSelectionFromInput(const FCheatActionCategory& Category, FCheatInputAction& ActionOut) {
    return false;
}

TArray<FCheatInputAction> UCheatManagerGunfireBase::GetCheatsByCategory(const FCheatActionCategory& Category) {
    return TArray<FCheatInputAction>();
}

bool UCheatManagerGunfireBase::GetCheatInputActionByName(FName CheatName, FCheatInputAction& ActionOut) const {
    return false;
}

ECheatExecutionType UCheatManagerGunfireBase::GetCheatExecutionType(const FName CheatName) const {
    return ECheatExecutionType::CHEAT_CONSOLE;
}

bool UCheatManagerGunfireBase::GetCheatCategoryByName(FName CategoryName, FCheatActionCategory& CategoryOut) const {
    return false;
}

TArray<FCheatActionCategory> UCheatManagerGunfireBase::GetCategorySelectionFromInput() {
    return TArray<FCheatActionCategory>();
}

TArray<FCheatInputAction> UCheatManagerGunfireBase::GetAllCheats() {
    return TArray<FCheatInputAction>();
}

bool UCheatManagerGunfireBase::ExecuteCheat(FName ActionName, TArray<FString> OptionalParameters) {
    return false;
}

bool UCheatManagerGunfireBase::EnableGlobalCheats() {
    return false;
}

void UCheatManagerGunfireBase::EnableCheatLockout(const FKey Key) {
}

void UCheatManagerGunfireBase::DoExecuteCheat(const FCheatInputAction& CheatAction, TArray<FString> OptionalParameters) {
}

void UCheatManagerGunfireBase::DisableGlobalCheats() {
}

void UCheatManagerGunfireBase::DisableCheatLockout(const bool bFlush) {
}

void UCheatManagerGunfireBase::BindCheatKeyDetection(bool bEnabled) {
}

bool UCheatManagerGunfireBase::AreCheatsEnabled() {
    return false;
}

UCheatManagerGunfireBase::UCheatManagerGunfireBase() {
    this->CheatInputComponent = NULL;
    this->SpawnedUIActor = NULL;
    this->FlyWidget = NULL;
}

