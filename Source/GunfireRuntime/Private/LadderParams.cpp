#include "LadderParams.h"

ULadderParams::ULadderParams() {
    this->TraceChannel = ECC_WorldStatic;
    this->TraceDistance = 100.00f;
    this->TraceHeightOffset = 0.00f;
    this->ValidArc = 90.00f;
    this->bUseNavLink = true;
    this->bSearchTowardsVelocity = false;
    this->GrabHeight = 50.00f;
    this->GrabOffset = 50.00f;
    this->ReverseGrabHeight = 50.00f;
    this->ReverseGrabOffset = 50.00f;
    this->BottomExitRungs = 5;
    this->TopExitRungs = 1;
    this->RungSpacing = 20.00f;
    this->RungGrabHeight = 33.30f;
    this->GrabHeightShift = 10.00f;
    this->RungOccupancy = 3;
    this->RungShift = 0;
}

