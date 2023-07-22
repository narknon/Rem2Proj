#pragma once
#include "CoreMinimal.h"
#include "DamageClass.h"
#include "DamageInfo.h"
#include "EBuildupMethod.h"
#include "DamageClassBuildup.generated.h"

class UCurveFloat;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UDamageClassBuildup : public UDamageClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildupMethod Method;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve;
    
    UDamageClassBuildup();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBuildupValue(const FDamageInfo& DamageInfo, float CurrentBuildup) const;
    
};

