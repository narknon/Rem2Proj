#include "DebugDrawUtil.h"

FColor UDebugDrawUtil::GetUniqueColor(int32 ColorIndex) {
    return FColor{};
}

void UDebugDrawUtil::DrawDebugWorldTransform(const UObject* WorldContextObject, const FTransform& Transform, float PointSize, float LineLength, FLinearColor PointColor, bool bPersistentLines, float Lifetime, uint8 DepthPriority, float Thickness) {
}

void UDebugDrawUtil::DrawDebugArrow(const UObject* WorldContextObject, const FVector& LineStart, const FVector& LineEnd, const FVector& ArrowAxis, const FRotator& BasisRotation, const FLinearColor& Color, const float Thickness, const float Duration, const float ArrowSize) {
}

void UDebugDrawUtil::DebugDrawShapeWithOrientation(const UObject* WorldContextObject, const UShapeComponent* Shape, const FColor& Color, const FVector& Location, const FRotator& Rotation, bool bPersistentLines, float Lifetime, uint8 DepthPriority, float Thickness) {
}

void UDebugDrawUtil::DebugDrawShape(const UObject* WorldContextObject, const UShapeComponent* Shape, const FColor& Color, bool bPersistentLines, float Lifetime, uint8 DepthPriority, float Thickness) {
}

void UDebugDrawUtil::DebugDrawCollisionWithOrientation(const UObject* WorldContextObject, const UPrimitiveComponent* Primitive, const FColor& Color, const FVector& Location, const FRotator& Rotation, bool bPersistentLines, float Lifetime, uint8 DepthPriority, float Thickness) {
}

void UDebugDrawUtil::DebugDrawCollision(const UObject* WorldContextObject, const UPrimitiveComponent* Primitive, const FColor& Color, bool bPersistentLines, float Lifetime, uint8 DepthPriority, float Thickness) {
}

UDebugDrawUtil::UDebugDrawUtil() {
}

