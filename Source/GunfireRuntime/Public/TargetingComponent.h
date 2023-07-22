#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HeuristicBoundsHitResult.h"
#include "TargetTraceParams.h"
#include "TargetingComponent.generated.h"

class UTargetManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UTargetingComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCacheTargetOnTick;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetTraceParams TargetTraceParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TargetUseTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetTraceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAdjustAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAdjustBufferScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAdjustTowardsCenterOfMassPct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnapAngle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHeuristicBoundsHitResult CurrentTargetHitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHeuristicBoundsHitResult PrevTargetHitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHeuristicBoundsHitResult CurrentSnapTargetHitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTargetManager* CachedTargetManager;
    
public:
    UTargetingComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNewTargetSet(FHeuristicBoundsHitResult& NewTargetHitResult);
    
    UFUNCTION(BlueprintCallable)
    bool GetTarget(FHeuristicBoundsHitResult& OutTargetHitResult, bool bForceRecalc);
    
    UFUNCTION(BlueprintCallable)
    bool GetSnapTarget(FHeuristicBoundsHitResult& OutSnapTargetHitResult, bool bForceRecalc);
    
};

