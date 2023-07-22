#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "EAngleComponent.h"
#include "EAngleRef.h"
#include "AngleDiffCondition.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAngleDiffCondition : public UCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAngleComponent AngleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAngleRef Angle1Ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle1RefOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAngleRef Angle2Ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle2RefOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Arc;
    
public:
    UAngleDiffCondition();
};

