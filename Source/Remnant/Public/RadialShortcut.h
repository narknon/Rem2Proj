#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RadialShortcut.generated.h"

class AItem;

USTRUCT(BlueprintType)
struct REMNANT_API FRadialShortcut {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName Radial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItem> ItemBP;
    
    FRadialShortcut();
};

