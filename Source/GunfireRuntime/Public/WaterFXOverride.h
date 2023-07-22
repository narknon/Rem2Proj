#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WaterFXEntry.h"
#include "WaterFXOverride.generated.h"

class UPhysicsBoundsType;

USTRUCT(BlueprintType)
struct FWaterFXOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UPhysicsBoundsType>> WaterTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaterFXEntry> WaterEnterFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaterFXEntry> WaterWakeFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaterFXEntry> WaterExitFX;
    
    GUNFIRERUNTIME_API FWaterFXOverride();
};

