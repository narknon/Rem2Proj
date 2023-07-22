#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "Templates/SubclassOf.h"
#include "EquipItemDecorator.generated.h"

class AItem;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UEquipItemDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItem> ItemBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnequip;
    
public:
    UEquipItemDecorator();
};

