#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SavedEquipmentVisual.generated.h"

USTRUCT(BlueprintType)
struct FSavedEquipmentVisual {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSoftClassPath EquipmentPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSoftClassPath SkinEquipmentPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 EquipmentLevel;
    
    REMNANT_API FSavedEquipmentVisual();
};

