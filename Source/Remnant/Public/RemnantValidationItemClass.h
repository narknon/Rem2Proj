#pragma once
#include "CoreMinimal.h"
#include "RemnantValidationItemEntry.h"
#include "RemnantValidationItemClass.generated.h"

class AItem;

UCLASS(Blueprintable)
class REMNANT_API URemnantValidationItemClass : public URemnantValidationItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AItem> ItemClass;
    
    URemnantValidationItemClass();
};

