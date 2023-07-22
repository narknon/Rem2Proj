#pragma once
#include "CoreMinimal.h"
#include "EEquipmentTrackHandSetting.h"
#include "EEquipmentTrackStatusSetting.h"
#include "EquipmentPayload.generated.h"

class AItem;

USTRUCT(BlueprintType)
struct FEquipmentPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipmentTrackHandSetting InHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipmentTrackStatusSetting Equipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EquipmentSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AItem> ItemToEquip;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NotifyOnItemAdded;
    
    GUNFIRERUNTIME_API FEquipmentPayload();
};

