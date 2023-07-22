#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "CachedPhysicsComponent.h"
#include "Templates/SubclassOf.h"
#include "PhysicsUtil.generated.h"

class AActor;
class UDamageTypeGunfire;
class UPhysicalMaterial;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UPhysicsUtil : public UObject {
    GENERATED_BODY()
public:
    UPhysicsUtil();
    UFUNCTION(BlueprintCallable)
    static void RestoreRigidBodies(UPARAM(Ref) TArray<FCachedPhysicsComponent>& CachedComponents);
    
    UFUNCTION(BlueprintCallable)
    static void ResetOverlaps(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static void LockPhysicsToAxis(UPrimitiveComponent* Primitive, const FVector& Axis, bool bLockZ);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool LineTraceByChannelWithContext(UObject* WorldContextObject, const FVector& Start, const FVector& End, TEnumAsByte<ECollisionChannel> TraceChannel, bool TraceComplex, FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    static UPhysicalMaterial* GetPhysicsMaterial(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static int32 DisableRigidBodies(AActor* Actor, UPARAM(Ref) TArray<FCachedPhysicsComponent>& CachedComponents);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector CalculateTorque(const FVector& CurrentDirection, const FVector& DesiredDirection, const FVector& Axis, float Magnitude);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyLinearImpulseToActorAtLocation(AActor* Actor, TSubclassOf<UDamageTypeGunfire> DType, const FVector& Direction, const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyLinearImpulseToActor(AActor* Actor, TSubclassOf<UDamageTypeGunfire> DType, const FVector& Direction);
    
};

