#include "RopeComponent.h"

void URopeComponent::UpdateSegmentLengths(int32 StartingIndex, float DeltaTime) {
}

void URopeComponent::UpdateRope() {
}

void URopeComponent::SetUseDynamicLength(bool bDynamic) {
}

void URopeComponent::SetSlackForSegment(int32 Index, float Slack, float Speed, bool bUpdateSegmentLengths) {
}

void URopeComponent::SetRopeDamping(float LinearDamping, float AngularDamping) {
}

void URopeComponent::SetMaterial(UMaterialInterface* NewMaterial) {
}

void URopeComponent::SetLengthSpeedForSegment(int32 Index, float NewSpeed) {
}

void URopeComponent::SetLengthForSegment(int32 Index, float Length, bool bInstant, bool bUpdateSegmentLengths) {
}

void URopeComponent::SetDynamicLengthThresholdForSegment(int32 Index, float NewThreshhold) {
}

void URopeComponent::SetAutoOrientInitialBone(int32 Index, bool bAutoOrient) {
}

bool URopeComponent::SetAttachPoint(int32 Index, FRopeAttachPoint AttachPoint, bool bUpdateRope) {
    return false;
}

void URopeComponent::SetAngleLimits(float Swing1, float Swing2, float Twist) {
}

bool URopeComponent::RemoveAttachPointAtIndex(int32 Index, bool bUpdateRope) {
    return false;
}

float URopeComponent::GetTotalRopeLength() const {
    return 0.0f;
}

FTransform URopeComponent::GetRopeReferenceBoneTransform(FName BoneName) const {
    return FTransform{};
}

int32 URopeComponent::GetNumberOfAttachPoints() const {
    return 0;
}

int32 URopeComponent::GetNumActiveBones() const {
    return 0;
}

float URopeComponent::GetDistanceBetweenBones() const {
    return 0.0f;
}

TEnumAsByte<ECollisionResponse> URopeComponent::GetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel) const {
    return ECR_Ignore;
}

TEnumAsByte<ECollisionChannel> URopeComponent::GetCollisionObjectType() const {
    return ECC_WorldStatic;
}

USkeletalMeshComponent* URopeComponent::GetBoneAtIndex(int32 Index, FName& OutBoneName) const {
    return NULL;
}

USkeletalMeshComponent* URopeComponent::GetBoneAtDistanceAlongRope(float Distance, int32 StartingIndex, FName& OutBoneName, float& OutDistance) const {
    return NULL;
}

FRopeAttachPoint URopeComponent::GetAttachPointAtIndex(int32 Index) const {
    return FRopeAttachPoint{};
}

void URopeComponent::ClearAttachPoints(bool bUpdateRope) {
}

float URopeComponent::CalculateStress(int32 StartingIndex, int32 EndingIndex) const {
    return 0.0f;
}

float URopeComponent::CalculateMaxDiscontinuity(int32 StartingIndex, int32 EndingIndex) const {
    return 0.0f;
}

void URopeComponent::AddImpulseToSegment(int32 Index, FVector Force, bool bVelChange, bool bIgnoreMass) {
}

bool URopeComponent::AddAttachPoint(FRopeAttachPoint AttachPoint, bool bUpdateRope) {
    return false;
}

URopeComponent::URopeComponent() {
    this->RopeMesh = NULL;
    this->MaterialOverride = NULL;
    this->bEnableQueryCollision = false;
    this->PhysicsAssetOverride = NULL;
    this->bUseManualBoneList = false;
    this->bUseDynamicLength = false;
    this->MassScale = 1.00f;
    this->ProjectionLinearTolerance = 5.00f;
    this->ProjectionAngularTolerance = 180.00f;
    this->Swing1AngleLimit = 180.00f;
    this->Swing2AngleLimit = 180.00f;
    this->TwistAngleLimit = 180.00f;
    this->ConstraintAngularMotorStrength = 500.00f;
    this->MaximumLinearDamping = -1.00f;
    this->MaximumAngularDamping = -1.00f;
}

