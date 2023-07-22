#include "ClimbingCameraVolume.h"

void AClimbingCameraVolume::OnClimbSurfaceChanged(UClimbingComponent* ClimbingComponent, const FClimbableSurfaceResult& NewSurface, const FClimbableSurfaceResult& PreviousSurface) {
}

AClimbingCameraVolume::AClimbingCameraVolume() {
    this->bAutoDeactivateOnDismount = true;
    this->bCenterCameraOnDismount = true;
    this->CenterPitchMin = -10.00f;
    this->CenterPitchMax = 20.00f;
    this->CenterPitchYawArc = 45.00f;
}

