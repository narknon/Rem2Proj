#include "CameraModifier_SimulatedHMD.h"

UCameraModifier_SimulatedHMD::UCameraModifier_SimulatedHMD() {
    this->PitchMin = -70.00f;
    this->PitchMax = 70.00f;
    this->PitchSpeed = 60.00f;
    this->YawSpeed = 120.00f;
    this->InputComponent = NULL;
}

