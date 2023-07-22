#include "MapTileInfoAsset.h"

UMapTileInfoAsset::UMapTileInfoAsset() {
    this->RegisterTile = true;
    this->TileSet = NULL;
    this->Flags = 255;
    this->PathCost = 1;
    this->Direction = ETileDirection::None;
}

