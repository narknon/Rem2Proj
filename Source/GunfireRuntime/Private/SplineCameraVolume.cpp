#include "SplineCameraVolume.h"
#include "Components/BoxComponent.h"
#include "SplineCameraComponent.h"
#include "SplineCameraSplineComponent.h"

bool ASplineCameraVolume::Validate_Implementation(ACharacterGunfire* InCharacter) const {
    return false;
}



float ASplineCameraVolume::GetNearestInputKey(const FVector& WorldLocation) const {
    return 0.0f;
}

FVector ASplineCameraVolume::GetCurrentSplinePosition() const {
    return FVector{};
}

FVector ASplineCameraVolume::GetCurrentSplineForwardVector() const {
    return FVector{};
}

ACharacterGunfire* ASplineCameraVolume::GetCharacter() const {
    return NULL;
}

void ASplineCameraVolume::EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASplineCameraVolume::Deactivate() {
}

void ASplineCameraVolume::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool ASplineCameraVolume::Activate(ACharacterGunfire* InCharacter) {
    return false;
}

ASplineCameraVolume::ASplineCameraVolume() {
    this->Volume = CreateDefaultSubobject<UBoxComponent>(TEXT("Volume"));
    this->ReferenceSpline = CreateDefaultSubobject<USplineCameraSplineComponent>(TEXT("Character Spline"));
    this->CameraSpline = CreateDefaultSubobject<USplineCameraSplineComponent>(TEXT("Camera Spline (Forward)"));
    this->CameraBackwardSpline = CreateDefaultSubobject<USplineCameraSplineComponent>(TEXT("Camera Spline (Backward)"));
    this->bAutoActivateCamera = true;
    this->bDynamicallyUpdate = false;
    this->bPlayerTarget = true;
    this->bUseStickyMovement = true;
    this->CameraSplineOffset = 0.00f;
    this->CameraMaxSpeed = 1000.00f;
    this->EntryBlendTime = 0.50f;
    this->EntryPositionBlendFactor = 0.08f;
    this->EntryRotationBlendFactor = 0.08f;
    this->PositionBlendFactor = 0.50f;
    this->RotationBlendFactor = 0.90f;
    this->ExitBlendTime = 0.50f;
    this->bUseDirectionalCameraSplines = false;
    this->CutTimeThreshold = 0.50f;
    this->bShouldCutCamera = false;
    this->DirectionChangeBlendTime = -1.00f;
    this->bAllowAdditiveControls = true;
    this->PlayerLookPitchMin = 0.00f;
    this->PlayerLookPitchMax = 0.00f;
    this->PlayerLookPitchSpeed = 45.00f;
    this->PlayerLookPitchMouseSpeed = 0.15f;
    this->PlayerLookYawMin = -45.00f;
    this->PlayerLookYawMax = 45.00f;
    this->PlayerLookYawSpeed = 90.00f;
    this->PlayerLookYawMouseSpeed = 0.15f;
    this->AutoCenter = true;
    this->AutoCenterSmoothTime = 2.00f;
    this->AutoCenterDelay = 2.00f;
    this->SplineCameraComponent = CreateDefaultSubobject<USplineCameraComponent>(TEXT("Root"));
    this->Character = NULL;
    this->PlayerController = NULL;
    this->CameraManager = NULL;
}

