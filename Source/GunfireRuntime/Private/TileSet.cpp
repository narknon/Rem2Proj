#include "TileSet.h"

UTileSet::UTileSet() {
    this->TileSizeX = 0.00f;
    this->TileSizeY = 0.00f;
    this->TileSizeZ = 2000.00f;
    this->TileMinZ = 0.00f;
    this->TileMaxZ = 0.00f;
    this->GenerateNavMesh = true;
    this->AllowTileRotation = true;
    this->ActiveTileDepth = 1;
    this->DoTileVisibility = true;
    this->ResourceDensity = 1.00f;
}

