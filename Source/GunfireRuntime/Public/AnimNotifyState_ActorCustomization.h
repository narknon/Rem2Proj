#pragma once
#include "CoreMinimal.h"
#include "ConditionalAnimNotifyState.h"
#include "Templates/SubclassOf.h"
#include "AnimNotifyState_ActorCustomization.generated.h"

class UItemType;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class GUNFIRERUNTIME_API UAnimNotifyState_ActorCustomization : public UConditionalAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CustomizationSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VisualID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemType> EquipmentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseEquipmentCustomizationSet;
    
    UAnimNotifyState_ActorCustomization();
};

