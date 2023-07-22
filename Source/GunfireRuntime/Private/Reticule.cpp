#include "Reticule.h"

UReticule::UReticule() {
    this->RadialOffset = 2.00f;
    this->bShowGhostReticule = true;
    this->bUsePredictedEndLocation = true;
    this->bUseWorldSpaceScale = true;
    this->WorldReticuleSize = 1000.00f;
}

