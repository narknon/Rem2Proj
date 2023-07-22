#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "RopeAttachPoint.h"
#include "RopeSegmentComponents.h"
#include "RopeComponent.generated.h"

class UMaterialInterface;
class UPhysicsAsset;
class UPhysicsConstraintComponent;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API URopeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* RopeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableQueryCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RopeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* PhysicsAssetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseManualBoneList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Bones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDynamicLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRopeAttachPoint> AttachPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MassScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectionLinearTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectionAngularTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Swing1AngleLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Swing2AngleLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TwistAngleLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConstraintAngularMotorStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumLinearDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumAngularDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DilatencyForceRange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> CachedMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPhysicsConstraintComponent*> CachedConstraints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> HiddenMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRopeSegmentComponents> RopeSegments;
    
public:
    URopeComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateSegmentLengths(int32 StartingIndex, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateRope();
    
    UFUNCTION(BlueprintCallable)
    void SetUseDynamicLength(bool bDynamic);
    
    UFUNCTION(BlueprintCallable)
    void SetSlackForSegment(int32 Index, float Slack, float Speed, bool bUpdateSegmentLengths);
    
    UFUNCTION(BlueprintCallable)
    void SetRopeDamping(float LinearDamping, float AngularDamping);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterial(UMaterialInterface* NewMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetLengthSpeedForSegment(int32 Index, float NewSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetLengthForSegment(int32 Index, float Length, bool bInstant, bool bUpdateSegmentLengths);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicLengthThresholdForSegment(int32 Index, float NewThreshhold);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoOrientInitialBone(int32 Index, bool bAutoOrient);
    
    UFUNCTION(BlueprintCallable)
    bool SetAttachPoint(int32 Index, FRopeAttachPoint AttachPoint, bool bUpdateRope);
    
    UFUNCTION(BlueprintCallable)
    void SetAngleLimits(float Swing1, float Swing2, float Twist);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAttachPointAtIndex(int32 Index, bool bUpdateRope);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalRopeLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetRopeReferenceBoneTransform(FName BoneName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfAttachPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 GetNumActiveBones() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceBetweenBones() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ECollisionResponse> GetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ECollisionChannel> GetCollisionObjectType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    USkeletalMeshComponent* GetBoneAtIndex(int32 Index, FName& OutBoneName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    USkeletalMeshComponent* GetBoneAtDistanceAlongRope(float Distance, int32 StartingIndex, FName& OutBoneName, float& OutDistance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRopeAttachPoint GetAttachPointAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearAttachPoints(bool bUpdateRope);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    float CalculateStress(int32 StartingIndex, int32 EndingIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    float CalculateMaxDiscontinuity(int32 StartingIndex, int32 EndingIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void AddImpulseToSegment(int32 Index, FVector Force, bool bVelChange, bool bIgnoreMass);
    
    UFUNCTION(BlueprintCallable)
    bool AddAttachPoint(FRopeAttachPoint AttachPoint, bool bUpdateRope);
    
};

