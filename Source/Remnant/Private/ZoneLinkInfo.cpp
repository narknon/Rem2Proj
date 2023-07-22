#include "ZoneLinkInfo.h"

FZoneLinkInfo::FZoneLinkInfo() {
    this->LinkActor = NULL;
    this->ZoneID = 0;
    this->Type = EZoneLinkType::Link;
    this->IsActive = false;
    this->IsMainPath = false;
    this->IsDisabled = false;
    this->CanBeRespawnLink = false;
    this->Used = false;
    this->TileID = 0;
}

