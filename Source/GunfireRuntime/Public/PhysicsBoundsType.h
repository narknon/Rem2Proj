#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Chaos/ChaosEngineInterface.h"
#include "PhysicsBoundsType.generated.h"

UCLASS(Abstract, Blueprintable, Const, MinimalAPI)
class UPhysicsBoundsType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideWaterSurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> WaterSurfaceType;
    
    UPhysicsBoundsType();
};

