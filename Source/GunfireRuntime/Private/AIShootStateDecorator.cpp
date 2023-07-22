#include "AIShootStateDecorator.h"

UAIShootStateDecorator::UAIShootStateDecorator() {
    this->WeaponType = NULL;
    this->ReadyTime = 0.00f;
    this->ReadyStartEvent = TEXT("OnBeginReadyWeapon");
    this->ReadyLingerTime = 0.00f;
    this->Pressure = 0;
    this->ShotRequiresLOS = false;
    this->BlindShootDivergeDistance = -1.00f;
    this->CooldownMin = 0.50f;
    this->CooldownMax = 1.50f;
    this->ValidateArc = false;
    this->ArcYaw = 180.00f;
    this->ArcYawOffset = 0.00f;
    this->ArcPitch = 140.00f;
    this->ArcPitchOffset = -20.00f;
}

