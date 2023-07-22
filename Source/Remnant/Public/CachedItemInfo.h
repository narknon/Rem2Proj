#pragma once
#include "CoreMinimal.h"
#include "CachedItemInstanceData.h"
#include "Templates/SubclassOf.h"
#include "ValidateOverTimeInfo.h"
#include "CachedItemInfo.generated.h"

class AItem;
class UItemType;

USTRUCT(BlueprintType)
struct REMNANT_API FCachedItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItem> CachedItemBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AItem> SoftItemBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemType> CachedItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCachedItemInstanceData> CachedInstanceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCachedItemInstanceData ExceptionInstanceDataMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCachedItemInstanceData ExceptionInstanceDataMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FValidateOverTimeInfo QuantityOverTime;
    
    FCachedItemInfo();
};

