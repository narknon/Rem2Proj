#include "PhysCastCondition.h"

UPhysCastCondition::UPhysCastCondition() {
    this->TraceChannel = ECC_WorldStatic;
    this->Distance = 0.00f;
    this->TraceComplex = true;
}

