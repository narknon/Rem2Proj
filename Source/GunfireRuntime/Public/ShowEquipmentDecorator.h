#pragma once
#include "CoreMinimal.h"
#include "ShowEquipmentAbstractDecorator.h"
#include "Templates/SubclassOf.h"
#include "ShowEquipmentDecorator.generated.h"

class AEquipment;
class UItemType;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UShowEquipmentDecorator : public UShowEquipmentAbstractDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemType> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AEquipment> EquipmentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEditType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEditEquipmentType;
    
public:
    UShowEquipmentDecorator();
};

