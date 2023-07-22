#include "PhysicsUtil.h"
#include "Templates/SubclassOf.h"

void UPhysicsUtil::RestoreRigidBodies(TArray<FCachedPhysicsComponent>& CachedComponents) {
}

void UPhysicsUtil::ResetOverlaps(UPrimitiveComponent* Component) {
}

void UPhysicsUtil::LockPhysicsToAxis(UPrimitiveComponent* Primitive, const FVector& Axis, bool bLockZ) {
}

bool UPhysicsUtil::LineTraceByChannelWithContext(UObject* WorldContextObject, const FVector& Start, const FVector& End, TEnumAsByte<ECollisionChannel> TraceChannel, bool TraceComplex, FHitResult& Hit) {
    return false;
}

UPhysicalMaterial* UPhysicsUtil::GetPhysicsMaterial(UPrimitiveComponent* Component) {
    return NULL;
}

int32 UPhysicsUtil::DisableRigidBodies(AActor* Actor, TArray<FCachedPhysicsComponent>& CachedComponents) {
    return 0;
}

FVector UPhysicsUtil::CalculateTorque(const FVector& CurrentDirection, const FVector& DesiredDirection, const FVector& Axis, float Magnitude) {
    return FVector{};
}

void UPhysicsUtil::ApplyLinearImpulseToActorAtLocation(AActor* Actor, TSubclassOf<UDamageTypeGunfire> DType, const FVector& Direction, const FVector& Location) {
}

void UPhysicsUtil::ApplyLinearImpulseToActor(AActor* Actor, TSubclassOf<UDamageTypeGunfire> DType, const FVector& Direction) {
}

UPhysicsUtil::UPhysicsUtil() {
}

