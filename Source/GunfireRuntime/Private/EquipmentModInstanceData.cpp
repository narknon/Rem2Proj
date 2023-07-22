#include "EquipmentModInstanceData.h"
#include "Net/UnrealNetwork.h"

void UEquipmentModInstanceData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEquipmentModInstanceData, EquippedModItemID);
    DOREPLIFETIME(UEquipmentModInstanceData, EquippedModSlotID);
}

UEquipmentModInstanceData::UEquipmentModInstanceData() {
    this->EquippedModItemID = -1;
    this->EquippedModSlotID = 0;
}

