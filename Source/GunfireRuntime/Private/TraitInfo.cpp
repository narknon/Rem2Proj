#include "TraitInfo.h"

FTraitInfo::FTraitInfo() {
    this->Transient = false;
    this->Level = 0;
    this->SlotIndex = 0;
    this->InstanceData = 0;
    this->TraitBP = NULL;
    this->bNewTrait = false;
    this->TraitInstance = NULL;
}

