#include "EquipmentPayload.h"

FEquipmentPayload::FEquipmentPayload() {
    this->InHand = EEquipmentTrackHandSetting::NoChange;
    this->Equipped = EEquipmentTrackStatusSetting::NoChange;
    this->NotifyOnItemAdded = false;
}

