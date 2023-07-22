#include "DropInfo.h"

FDropInfo::FDropInfo() {
    this->Source = NULL;
    this->ItemBP = NULL;
    this->InstanceData = NULL;
    this->Quantity = 0;
    this->Level = 0;
    this->Force = false;
    this->Transient = false;
    this->GroundActor = NULL;
}

