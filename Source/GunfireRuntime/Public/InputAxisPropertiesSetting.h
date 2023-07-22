#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "FloatUserSetting.h"
#include "InputAxisPropertiesSetting.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UInputAxisPropertiesSetting : public UFloatUserSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> AxisNames;
    
    UInputAxisPropertiesSetting();
};

