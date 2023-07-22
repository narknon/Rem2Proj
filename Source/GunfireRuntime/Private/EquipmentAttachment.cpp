#include "EquipmentAttachment.h"

FEquipmentAttachment::FEquipmentAttachment() {
    this->AttachType = EEquipAttachType::Active;
    this->Component = NULL;
    this->Parent = NULL;
}

