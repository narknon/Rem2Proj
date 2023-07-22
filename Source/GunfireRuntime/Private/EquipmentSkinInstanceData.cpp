#include "EquipmentSkinInstanceData.h"
#include "Net/UnrealNetwork.h"

void UEquipmentSkinInstanceData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEquipmentSkinInstanceData, Equipped);
}

UEquipmentSkinInstanceData::UEquipmentSkinInstanceData() {
    this->Equipped = false;
}

