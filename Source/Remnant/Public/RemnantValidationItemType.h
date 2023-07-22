#pragma once
#include "CoreMinimal.h"
#include "RemnantValidationItemEntry.h"
#include "RemnantValidationItemType.generated.h"

class UItemType;

UCLASS(Blueprintable)
class REMNANT_API URemnantValidationItemType : public URemnantValidationItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UItemType> ItemType;
    
    URemnantValidationItemType();
};

