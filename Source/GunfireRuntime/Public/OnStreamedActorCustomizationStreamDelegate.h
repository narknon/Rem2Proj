#pragma once
#include "CoreMinimal.h"
#include "OnStreamedActorCustomizationStreamDelegate.generated.h"

class UActorCustomizationComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnStreamedActorCustomizationStream, UActorCustomizationComponent*, Component, FName, SlotID, FName, CustomizationID);

