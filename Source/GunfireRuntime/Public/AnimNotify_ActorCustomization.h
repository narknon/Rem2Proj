#pragma once
#include "CoreMinimal.h"
#include "ConditionalAnimNotify.h"
#include "Templates/SubclassOf.h"
#include "AnimNotify_ActorCustomization.generated.h"

class UItemType;

UCLASS(Blueprintable, CollapseCategories)
class GUNFIRERUNTIME_API UAnimNotify_ActorCustomization : public UConditionalAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemType> EquipmentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseEquipmentCustomizationSet;
    
    UAnimNotify_ActorCustomization();
};

