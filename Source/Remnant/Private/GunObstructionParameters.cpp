#include "GunObstructionParameters.h"

FGunObstructionParameters::FGunObstructionParameters() {
    this->Radius = 0.00f;
    this->Distance = 0.00f;
    this->bTraceComplex = false;
    this->TraceChannel = ECC_WorldStatic;
}

