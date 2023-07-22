#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ProjectileVisualizationContext.h"
#include "ProjectileVisualizationParams.h"
#include "TargetingColorParams.h"
#include "Templates/SubclassOf.h"
#include "ProjectileVisualization.generated.h"

class UMaterialInterface;
class USplineMeshComponent;
class UStaticMesh;

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API AProjectileVisualization : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* PathMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PathMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ImpactActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyShowImpactActorWtihValidTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNoImpactActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> NoImpactActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ColorParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsesTargetColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInterpolateTargetColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetingColorParams TargetingColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawPathAsMarquee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LineSizes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarqueeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FullAlphaDistance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ImpactActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> SplineMeshes;
    
public:
    AProjectileVisualization();
    UFUNCTION(BlueprintCallable)
    static void VisualizeProjectileFromClass(AActor* Cause, TSubclassOf<AActor> ProjectileClass, FVector StartLocation, FRotator StartDirection, const FProjectileVisualizationParams& Params, FProjectileVisualizationContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static void VisualizeProjectile(AActor* Cause, AActor* Projectile, FVector StartLocation, FRotator StartDirection, const FProjectileVisualizationParams& Params, FProjectileVisualizationContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PreDraw(const FProjectileVisualizationParams& Params, UPARAM(Ref) FProjectileVisualizationContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostDrawPath(const FProjectileVisualizationParams& Params, const FProjectileVisualizationContext& Context, const FLinearColor& DrawColor);
    
    UFUNCTION(BlueprintCallable)
    static void ClearProjectileVisualization(UPARAM(Ref) FProjectileVisualizationContext& Context);
    
};

