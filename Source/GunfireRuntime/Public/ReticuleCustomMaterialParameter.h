#pragma once
#include "CoreMinimal.h"
#include "EReticuleGetterType.h"
#include "ReticuleCustomMaterialParameter.generated.h"

USTRUCT(BlueprintType)
struct FReticuleCustomMaterialParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReticuleGetterType GetterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Getter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOutSpeed;
    
    GUNFIRERUNTIME_API FReticuleCustomMaterialParameter();
};

