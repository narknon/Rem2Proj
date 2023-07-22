#include "ImpactFX.h"

FImpactFX::FImpactFX() {
    this->SurfaceType = SurfaceType_Default;
    this->ImpactFXLoaded = NULL;
    this->DecalMaterialLoaded = NULL;
    this->DecalSize = 0.00f;
    this->DecalDepth = 0.00f;
    this->DecalLifeSpan = 0.00f;
    this->DecalFadeScreenSize = 0.00f;
    this->DecalRandomizeRotation = false;
    this->Reflect = false;
}

