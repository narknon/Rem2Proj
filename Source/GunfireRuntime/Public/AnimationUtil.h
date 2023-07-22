#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "AnimationUtil.generated.h"

class AActor;
class ACharacter;
class UPoseableMeshComponent;
class USkeletalMeshComponent;
class USkinnedMeshComponent;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAnimationUtil : public UObject {
    GENERATED_BODY()
public:
    UAnimationUtil();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator UE4ToAutodeskRotation(const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable)
    static void TransferPoseToPoseableMesh(USkeletalMeshComponent* Source, UPoseableMeshComponent* Target);
    
    UFUNCTION(BlueprintCallable)
    static void SetDampingForBone(USkeletalMeshComponent* Mesh, const FName& BoneName, float LinearDamping, float AngularDamping);
    
    UFUNCTION(BlueprintCallable)
    static void SetDampingForAllBones(USkeletalMeshComponent* Mesh, float LinearDamping, float AngularDamping);
    
    UFUNCTION(BlueprintCallable)
    static void SetCollisionResponsesForBone(USkeletalMeshComponent* SkeletalMesh, FName BoneName, const FCollisionResponseContainer& Responses);
    
    UFUNCTION(BlueprintCallable)
    static void SetCollisionResponseForBone(USkeletalMeshComponent* SkeletalMesh, FName BoneName, TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> Response);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllCollisionResponsesForBone(USkeletalMeshComponent* SkeletalMesh, FName BoneName, TEnumAsByte<ECollisionResponse> Response);
    
    UFUNCTION(BlueprintCallable)
    static void ResetCollisionResponsesForBone(USkeletalMeshComponent* SkeletalMesh, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    static void ResetAnimInstance(USkeletalMeshComponent* SkeletalMesh);
    
    UFUNCTION(BlueprintCallable)
    static void ResetActorDynamics(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAnyRootMotion(ACharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAnyRenderedSlaveMeshes(const USkinnedMeshComponent* Mesh);
    
    UFUNCTION(BlueprintCallable)
    FCollisionResponseContainer GetCollisionResponsesForBone(USkeletalMeshComponent* SkeletalMesh, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<ECollisionResponse> GetCollisionResponseForBone(USkeletalMeshComponent* SkeletalMesh, FName BoneName, TEnumAsByte<ECollisionChannel> Channel);
    
    UFUNCTION(BlueprintCallable)
    static bool GetBoneTransform(const USkeletalMeshComponent* SkeletalMesh, FName BoneName, FTransform& Transform, TEnumAsByte<ERelativeTransformSpace> TransformSpace);
    
    UFUNCTION(BlueprintCallable)
    static bool GetBoneRefTransform(const USkeletalMeshComponent* SkeletalMesh, FName BoneName, FTransform& Transform);
    
};

