#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Tile.h"
#include "TileUtil.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UTileUtil : public UObject {
    GENERATED_BODY()
public:
    UTileUtil();
    UFUNCTION(BlueprintCallable)
    static bool IsVisible(const FTile& Tile);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTileLevelName(const FTile& Tile);
    
};

