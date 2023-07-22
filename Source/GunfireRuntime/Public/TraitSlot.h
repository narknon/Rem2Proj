#pragma once
#include "CoreMinimal.h"
#include "Conditions.h"
#include "Templates/SubclassOf.h"
#include "TraitSlot.generated.h"

class UTraitType;

USTRUCT(BlueprintType)
struct FTraitSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTraitType> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConditions UnlockConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoEquipToSlot;
    
    GUNFIRERUNTIME_API FTraitSlot();
};

