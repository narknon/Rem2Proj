#include "AimingParameters.h"

FAimingParameters::FAimingParameters() {
    this->Range = 0.00f;
    this->Muzzle = NULL;
    this->MuzzleObstructionDistance = 0.00f;
    this->TrajectoryMode = ERangedWeaponTrajectoryMode::Socket;
    this->AimAdjustMin = 0.00f;
    this->AimAdjustMax = 0.00f;
    this->AimAdjustOptimalDistance = 0.00f;
    this->AimAdjustTotalDistance = 0.00f;
    this->InputDragOptimalDistance = 0.00f;
    this->InputDragTotalDistance = 0.00f;
    this->ProjectileToVisualize = NULL;
}

