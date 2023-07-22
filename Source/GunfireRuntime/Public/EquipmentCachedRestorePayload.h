#pragma once
#include "CoreMinimal.h"
#include "EquipmentCachedRestorePayload.generated.h"

class AItem;

USTRUCT(BlueprintType)
struct FEquipmentCachedRestorePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AItem> ItemToEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AItem> ItemToUnEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AItem> AddedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EquipmentSlotName;
    
    GUNFIRERUNTIME_API FEquipmentCachedRestorePayload();
};

