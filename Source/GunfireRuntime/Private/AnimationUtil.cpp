#include "AnimationUtil.h"

FRotator UAnimationUtil::UE4ToAutodeskRotation(const FRotator& Rotation) {
    return FRotator{};
}

void UAnimationUtil::TransferPoseToPoseableMesh(USkeletalMeshComponent* Source, UPoseableMeshComponent* Target) {
}

void UAnimationUtil::SetDampingForBone(USkeletalMeshComponent* Mesh, const FName& BoneName, float LinearDamping, float AngularDamping) {
}

void UAnimationUtil::SetDampingForAllBones(USkeletalMeshComponent* Mesh, float LinearDamping, float AngularDamping) {
}

void UAnimationUtil::SetCollisionResponsesForBone(USkeletalMeshComponent* SkeletalMesh, FName BoneName, const FCollisionResponseContainer& Responses) {
}

void UAnimationUtil::SetCollisionResponseForBone(USkeletalMeshComponent* SkeletalMesh, FName BoneName, TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> Response) {
}

void UAnimationUtil::SetAllCollisionResponsesForBone(USkeletalMeshComponent* SkeletalMesh, FName BoneName, TEnumAsByte<ECollisionResponse> Response) {
}

void UAnimationUtil::ResetCollisionResponsesForBone(USkeletalMeshComponent* SkeletalMesh, FName BoneName) {
}

void UAnimationUtil::ResetAnimInstance(USkeletalMeshComponent* SkeletalMesh) {
}

void UAnimationUtil::ResetActorDynamics(const AActor* Actor) {
}

bool UAnimationUtil::HasAnyRootMotion(ACharacter* Character) {
    return false;
}

bool UAnimationUtil::HasAnyRenderedSlaveMeshes(const USkinnedMeshComponent* Mesh) {
    return false;
}

FCollisionResponseContainer UAnimationUtil::GetCollisionResponsesForBone(USkeletalMeshComponent* SkeletalMesh, FName BoneName) {
    return FCollisionResponseContainer{};
}

TEnumAsByte<ECollisionResponse> UAnimationUtil::GetCollisionResponseForBone(USkeletalMeshComponent* SkeletalMesh, FName BoneName, TEnumAsByte<ECollisionChannel> Channel) {
    return ECR_Ignore;
}

bool UAnimationUtil::GetBoneTransform(const USkeletalMeshComponent* SkeletalMesh, FName BoneName, FTransform& Transform, TEnumAsByte<ERelativeTransformSpace> TransformSpace) {
    return false;
}

bool UAnimationUtil::GetBoneRefTransform(const USkeletalMeshComponent* SkeletalMesh, FName BoneName, FTransform& Transform) {
    return false;
}

UAnimationUtil::UAnimationUtil() {
}

