#include "PlayerStateRemnant.h"
#include "Net/UnrealNetwork.h"

void APlayerStateRemnant::SetIsLocalPlayerTarget(bool IsTarget) {
}

void APlayerStateRemnant::OnRep_Traveling() {
}

bool APlayerStateRemnant::IsTraveling() const {
    return false;
}

void APlayerStateRemnant::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APlayerStateRemnant, bTraveling);
}

APlayerStateRemnant::APlayerStateRemnant() {
    this->bTraveling = false;
    this->bIsLocalPlayerTarget = false;
}

