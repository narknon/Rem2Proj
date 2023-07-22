#include "CachedMaterialState.h"

FCachedMaterialState::FCachedMaterialState() {
    this->OriginalMaterial = NULL;
    this->NewMaterial = NULL;
    this->OriginalMaterialIndex = 0;
    this->Component = NULL;
}

