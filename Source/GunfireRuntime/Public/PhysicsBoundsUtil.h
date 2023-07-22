#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Chaos/ChaosEngineInterface.h"
#include "Templates/SubclassOf.h"
#include "PhysicsBoundsUtil.generated.h"

class AActor;
class UPhysicsBoundsType;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UPhysicsBoundsUtil : public UObject {
    GENERATED_BODY()
public:
    UPhysicsBoundsUtil();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWaterBounds(AActor* Bounds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EPhysicalSurface> GetWaterSurfaceType(TSubclassOf<UPhysicsBoundsType> BoundsType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetWaterLine(AActor* Bounds, float& OutWaterLine);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<UPhysicsBoundsType> GetBoundsType(AActor* Bounds);
    
};

