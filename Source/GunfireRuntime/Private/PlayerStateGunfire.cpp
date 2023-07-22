#include "PlayerStateGunfire.h"
#include "Net/UnrealNetwork.h"

void APlayerStateGunfire::ServerSetChatRestricted_Implementation(bool ChatRestricted) {
}
bool APlayerStateGunfire::ServerSetChatRestricted_Validate(bool ChatRestricted) {
    return true;
}

void APlayerStateGunfire::OnRep_JoinState() const {
}

void APlayerStateGunfire::OnRep_ChatRestricted() {
}

void APlayerStateGunfire::MulticastSetJoinState_Implementation(EPlayerJoinState NewState) {
}

bool APlayerStateGunfire::IsHost() const {
    return false;
}

bool APlayerStateGunfire::IsChatRestricted() {
    return false;
}

APawn* APlayerStateGunfire::GetPlayerPawn() const {
    return NULL;
}

ACharacterGunfire* APlayerStateGunfire::GetPlayerCharacter() const {
    return NULL;
}

EPlayerJoinState APlayerStateGunfire::GetJoinState() const {
    return EPlayerJoinState::Disconnected;
}

bool APlayerStateGunfire::GetIsTalking() {
    return false;
}

void APlayerStateGunfire::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APlayerStateGunfire, bIsHost);
    DOREPLIFETIME(APlayerStateGunfire, bIsChatRestricted);
    DOREPLIFETIME(APlayerStateGunfire, JoinState);
}

APlayerStateGunfire::APlayerStateGunfire() {
    this->CachedPawn = NULL;
    this->bIsHost = false;
    this->bIsChatRestricted = false;
    this->JoinState = EPlayerJoinState::Disconnected;
}

