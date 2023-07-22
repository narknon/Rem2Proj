#include "RangedWeaponInstanceData.h"
#include "Net/UnrealNetwork.h"

void URangedWeaponInstanceData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URangedWeaponInstanceData, Ammo);
    DOREPLIFETIME(URangedWeaponInstanceData, AmmoInClip);
}

URangedWeaponInstanceData::URangedWeaponInstanceData() {
    this->Ammo = 0;
    this->AmmoInClip = 0;
}

