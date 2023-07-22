#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EGroundCheckType.h"
#include "GroundCheckParams.generated.h"

UCLASS(Abstract, Blueprintable, Const)
class GUNFIRERUNTIME_API UGroundCheckParams : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGroundCheckType GroundCheckType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EPhysicalSurface>> ValidSurfaceTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CastDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceCapsuleRadiusScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinGroundDistance;
    
    UGroundCheckParams();
};

