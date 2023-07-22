#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Templates/SubclassOf.h"
#include "PhysicsBoundsInterface.generated.h"

class UPhysicsBoundsType;
class USceneComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UPhysicsBoundsInterface : public UInterface {
    GENERATED_BODY()
};

class IPhysicsBoundsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsWaterBounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetWaterLine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UPhysicsBoundsType> GetBoundsType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetBoundsPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ConfirmOverlap(USceneComponent* Component) const;
    
};

