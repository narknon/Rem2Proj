#include "SequencerManager.h"
#include "Net/UnrealNetwork.h"

void USequencerManager::UpdateSkipStatus_Implementation(UObject* InSequence, bool ShouldSkip) {
}

void USequencerManager::SpectatorJoinRunningInstance_Implementation(APlayerControllerGunfire* Controller, UObject* CinematicAsset, FCinematicPlayerSettings CinematicSettings, AActor* Instigator, UEventTreeComponent* SourceComponent, bool Force) {
}

void USequencerManager::SkipSequence_Implementation(UObject* InSequence) {
}

void USequencerManager::SetupSequence_Client_Implementation(UObject* CinematicAsset, FCinematicPlayerSettings CinematicSettings, AActor* Instigator, UEventTreeComponent* SourceComponent, int32 Tries) {
}

void USequencerManager::RequestUIEvent(FSequencerUIEventPayload EventPayload, bool IsShowing) {
}

void USequencerManager::ProposeToSkip_Implementation(UObject* InSequence, APlayerGunfire* Player) {
}
bool USequencerManager::ProposeToSkip_Validate(UObject* InSequence, APlayerGunfire* Player) {
    return true;
}

void USequencerManager::OnRep_ServerInstanceCount() {
}

void USequencerManager::OnPlayerJoined(APlayerState* NewPlayer) {
}

void USequencerManager::NotifyClientsFailedToStart_Implementation(FCinematicPlayerSettings CinematicSettings, UObject* CinematicAsset, AActor* Instigator) {
}

void USequencerManager::HandleSpectationChange(AActor* SpectateTarget, APlayerControllerGunfire* Controller) {
}

bool USequencerManager::GetShowTimeCode() {
    return false;
}

UCinematicInstance_Base* USequencerManager::GetSequenceInstanceForCinematicAsset(UObject* CinematicAsset) {
    return NULL;
}

USequencerManager* USequencerManager::GetInstance(UObject* WorldContextObject) {
    return NULL;
}

TArray<UCinematicInstance_Base*> USequencerManager::GetActiveCinematicInstances() {
    return TArray<UCinematicInstance_Base*>();
}

void USequencerManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USequencerManager, ReplicationState);
    DOREPLIFETIME(USequencerManager, NumRunningInstancesOnServer);
}

USequencerManager::USequencerManager() {
    this->NumRunningInstancesOnServer = 0;
    this->PossessedObjectAction = NULL;
}

