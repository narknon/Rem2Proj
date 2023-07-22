#include "ReticuleMaterial.h"

UReticuleMaterial::UReticuleMaterial() {
    this->Material = NULL;
    this->DrawMode = EReticuleMaterialDrawMode::FillRadius;
    this->BaseMaterialSize = 10.00f;
    this->ColorParameter = TEXT("Color");
    this->AlphaParameter = TEXT("Alpha");
    this->LastReticuleMaterial = NULL;
}

