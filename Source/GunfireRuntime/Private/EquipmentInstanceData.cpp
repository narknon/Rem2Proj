#include "EquipmentInstanceData.h"
#include "Net/UnrealNetwork.h"

void UEquipmentInstanceData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEquipmentInstanceData, Mods);
}

UEquipmentInstanceData::UEquipmentInstanceData() {
}

