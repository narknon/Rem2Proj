#pragma once
#include "CoreMinimal.h"
#include "PhysCastCondition.h"
#include "RayCastCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API URayCastCondition : public UPhysCastCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightOffset;
    
public:
    URayCastCondition();
};

