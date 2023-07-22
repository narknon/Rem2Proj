#include "EncounterGroupInstance.h"

UEncounterGroupInstance::UEncounterGroupInstance() {
    this->ID = 0;
    this->Active = false;
    this->Encounter = NULL;
    this->Cooldown = 0.00f;
    this->AggroCooldown = 0.00f;
    this->NumEncounters = 0;
    this->Stopped = false;
    this->AutoManagePlayers = true;
    this->Explored = false;
    this->Suspended = false;
    this->Valid = false;
}

