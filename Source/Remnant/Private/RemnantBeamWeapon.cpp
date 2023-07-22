#include "RemnantBeamWeapon.h"
#include "Net/UnrealNetwork.h"

void ARemnantBeamWeapon::SetBeamFiring_Server_Implementation(bool Firing) {
}
bool ARemnantBeamWeapon::SetBeamFiring_Server_Validate(bool Firing) {
    return true;
}

void ARemnantBeamWeapon::OnRep_BeamFiring() {
}

void ARemnantBeamWeapon::OnEndBeamFX_Implementation() {
}

void ARemnantBeamWeapon::OnBeginBeamFX_Implementation() {
}

bool ARemnantBeamWeapon::IsBeamFiring() {
    return false;
}

void ARemnantBeamWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARemnantBeamWeapon, BeamWeaponFiring);
}

ARemnantBeamWeapon::ARemnantBeamWeapon() {
    this->BeamWeaponFiring = false;
}

