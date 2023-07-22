#include "AnimInstanceGunfire.h"

void UAnimInstanceGunfire::UpdateIkEffector(const FIkEffector& Effector) {
}

void UAnimInstanceGunfire::StopAnimation(FAnimationHandle Handle) {
}

void UAnimInstanceGunfire::SetVelocityMode(EAnimationVelocityMode NewMode) {
}

void UAnimInstanceGunfire::SetSimulatedVelocityRate(FVector SimulatedVelocityRate) {
}

void UAnimInstanceGunfire::SetSimulatedVelocity(FVector SimulatedVelocity) {
}

void UAnimInstanceGunfire::SetParentAnimInstance(UAnimInstanceGunfire* AnimInstance) {
}

void UAnimInstanceGunfire::SetCopyParentAnimationMetrics(bool bEnabled) {
}

void UAnimInstanceGunfire::SetCopyParentAimDirection(bool bEnabled) {
}

void UAnimInstanceGunfire::SetCopyAllParentAnimationLayers(bool bEnabled) {
}

FName UAnimInstanceGunfire::ResolveBoneName(USkeletalMeshComponent* Mesh, FName InBoneName) {
    return NAME_None;
}

void UAnimInstanceGunfire::RemoveParentAnimationLayerToCopy(const FName& Layer) {
}

void UAnimInstanceGunfire::RemoveIkEffector(FName IkBone) {
}

void UAnimInstanceGunfire::RemoveChildAnimInstance(UAnimInstanceGunfire* AnimInstance) {
}

void UAnimInstanceGunfire::RemoveAnimationTag(FName AnimTag) {
}

FAnimationHandle UAnimInstanceGunfire::PlayAnimationByID(FName AnimationLayer, FName AnimationID) {
    return FAnimationHandle{};
}

bool UAnimInstanceGunfire::HasAnimationTag(FName AnimTag) const {
    return false;
}

UStateMachineComponent* UAnimInstanceGunfire::GetStateMachine() const {
    return NULL;
}

float UAnimInstanceGunfire::GetMoveInputDir() const {
    return 0.0f;
}

float UAnimInstanceGunfire::GetMoveDir() const {
    return 0.0f;
}

UAnimInstanceGunfire* UAnimInstanceGunfire::GetMasterAnimInstance(AActor* Actor) {
    return NULL;
}

FIkEffector UAnimInstanceGunfire::GetIkEffector(FName IkBone) const {
    return FIkEffector{};
}

float UAnimInstanceGunfire::GetHeading() const {
    return 0.0f;
}

UInputStateComponent* UAnimInstanceGunfire::GetCharacterInput() const {
    return NULL;
}

FVector UAnimInstanceGunfire::GetAnimationVelocity() const {
    return FVector{};
}

void UAnimInstanceGunfire::GetAimAngles(FName RefBone, float& Yaw, float& Pitch) {
}

void UAnimInstanceGunfire::EnableLookPoses(bool bEnabled) {
}

bool UAnimInstanceGunfire::CompareAngles(float Angle1, float Angle2, float Arc) const {
    return false;
}

bool UAnimInstanceGunfire::AreLookPosesDisabled() const {
    return false;
}

float UAnimInstanceGunfire::ApplyAngleDeadzones(float Angle, const TArray<FVector2D> Deadzones, float DirectionAngleTolerance, float PreviousAngle) {
    return 0.0f;
}

void UAnimInstanceGunfire::AddParentAnimationLayerToCopy(const FName& Layer) {
}

void UAnimInstanceGunfire::AddChildAnimInstance(UAnimInstanceGunfire* AnimInstance) {
}

void UAnimInstanceGunfire::AddAnimationTag(FName AnimTag) {
}

UAnimInstanceGunfire::UAnimInstanceGunfire() {
    this->Speed = 0.00f;
    this->VerticalSpeed = 0.00f;
    this->TurnSpeed = 0.00f;
    this->VelocityMode = EAnimationVelocityMode::Movement;
    this->Direction = 0.00f;
    this->InputDirection = 0.00f;
    this->CameraRelativeInputDirection = 0.00f;
    this->VerticalDirection = 0.00f;
    this->CameraRelativeVerticalInputDirection = 0.00f;
    this->bCalculateGroundSlope = false;
    this->GroundSlope = 0.00f;
    this->bIsStopping = false;
    this->WindupPlayrate = 1.00f;
    this->UpperBlendOut = 1.00f;
    this->UpperBlendOutDelay = 0.00f;
    this->AnimationLayers.AddDefaulted(1);
    this->AimYaw = 0.00f;
    this->AimPitch = 0.00f;
    this->UseTargetForAim = true;
    this->bAdjustTargetDirectionByMeshOrientation = false;
    this->DirectionalAnimationInterpSpeed = 0.00f;
    this->bMaintainDirectionWhileStopping = false;
    this->bClearTimeDilationOnStateChange = false;
    this->bCopyParentAnimationMetrics = false;
    this->bCopyParentAimDirection = false;
    this->bCopyAllParentLayers = false;
    this->DefaultBone = TEXT("null_Spine");
    this->bDoNotifyTriggerRateOptimizations = true;
    this->bDisableRateOptimizationsDuringCinematics = true;
    this->MinNotifiesPerFrame = 1;
    this->MaxNotifiesPerFrame = 3;
    this->QueuedNotifyFlushThreshold = 100;
    this->OwningPawn = NULL;
    this->OwningCharacter = NULL;
    this->OwningPlayer = NULL;
    this->Input = NULL;
    this->CachedStateMachine = NULL;
    this->ParentAnimInstance = NULL;
}

