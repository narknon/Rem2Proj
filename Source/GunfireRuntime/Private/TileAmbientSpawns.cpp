#include "TileAmbientSpawns.h"

FTileAmbientSpawns::FTileAmbientSpawns() {
    this->TileID = 0;
    this->HasBeenActivated = false;
    this->State = EAmbientSpawnState::Unloaded;
}

