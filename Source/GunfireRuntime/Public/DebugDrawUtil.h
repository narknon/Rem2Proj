#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DebugDrawUtil.generated.h"

class UPrimitiveComponent;
class UShapeComponent;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UDebugDrawUtil : public UObject {
    GENERATED_BODY()
public:
    UDebugDrawUtil();
    UFUNCTION(BlueprintCallable)
    static FColor GetUniqueColor(int32 ColorIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugWorldTransform(const UObject* WorldContextObject, const FTransform& Transform, float PointSize, float LineLength, FLinearColor PointColor, bool bPersistentLines, float Lifetime, uint8 DepthPriority, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugArrow(const UObject* WorldContextObject, const FVector& LineStart, const FVector& LineEnd, const FVector& ArrowAxis, const FRotator& BasisRotation, const FLinearColor& Color, const float Thickness, const float Duration, const float ArrowSize);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DebugDrawShapeWithOrientation(const UObject* WorldContextObject, const UShapeComponent* Shape, const FColor& Color, const FVector& Location, const FRotator& Rotation, bool bPersistentLines, float Lifetime, uint8 DepthPriority, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DebugDrawShape(const UObject* WorldContextObject, const UShapeComponent* Shape, const FColor& Color, bool bPersistentLines, float Lifetime, uint8 DepthPriority, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DebugDrawCollisionWithOrientation(const UObject* WorldContextObject, const UPrimitiveComponent* Primitive, const FColor& Color, const FVector& Location, const FRotator& Rotation, bool bPersistentLines, float Lifetime, uint8 DepthPriority, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DebugDrawCollision(const UObject* WorldContextObject, const UPrimitiveComponent* Primitive, const FColor& Color, bool bPersistentLines, float Lifetime, uint8 DepthPriority, float Thickness);
    
};

