#include "ActionPing.h"

FActionPing::FActionPing() {
    this->Duration = 0.00f;
    this->PingType = EGamePingType::Location;
    this->SubContext = NULL;
    this->ShouldSpawnPingActor = false;
    this->PingOwner = NULL;
    this->Target = NULL;
    this->SpawnedPingActor = NULL;
    this->TailType = ETailType::NoTail;
    this->Emote = NULL;
}

