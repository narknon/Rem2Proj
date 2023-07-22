#pragma once
#include "CoreMinimal.h"
#include "EProjectileBounceMode.h"
#include "EProjectileSimMode.h"
#include "Templates/SubclassOf.h"
#include "ProjectileVisualizationParams.generated.h"

class AProjectileVisualization;

USTRUCT(BlueprintType)
struct FProjectileVisualizationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EProjectileSimMode SimMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EProjectileBounceMode BounceMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBounces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinalBounceMaximumDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSimulationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectileVisualization> ProjectileVisualization;
    
    GUNFIRERUNTIME_API FProjectileVisualizationParams();
};

