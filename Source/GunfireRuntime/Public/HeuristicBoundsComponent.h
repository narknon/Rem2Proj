#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "EHeuristicBoundsPanelAlignment.h"
#include "EHeuristicBoundsShape.h"
#include "HeuristicBoundsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UHeuristicBoundsComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHeuristicBoundsShape BoundsShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScaleWithDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OuterExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerExtentScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BracketScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSlidingBoundsLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingMaxima;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingMinima;
    
    UHeuristicBoundsComponent();
    UFUNCTION(BlueprintCallable)
    void SetOuterExtent(const FVector& NewExtent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetWorldTransformForPanelAtSetDistance(const FVector& ViewLocation, const FVector2D& PanelSize, EHeuristicBoundsPanelAlignment Alignment, float ProjectionDistance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetWorldTransformForPanel(const FVector& ViewLocation, const FVector2D& PanelSize, EHeuristicBoundsPanelAlignment Alignment) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetBoundsBracketOnPlane(const FVector& ViewLocation, float PlaneDistance) const;
    
};

