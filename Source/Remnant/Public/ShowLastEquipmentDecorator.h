#pragma once
#include "CoreMinimal.h"
#include "ShowEquipmentAbstractDecorator.h"
#include "ShowLastEquipmentDecorator.generated.h"

UCLASS(Blueprintable)
class REMNANT_API UShowLastEquipmentDecorator : public UShowEquipmentAbstractDecorator {
    GENERATED_BODY()
public:
    UShowLastEquipmentDecorator();
};

