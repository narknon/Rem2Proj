#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Templates/SubclassOf.h"
#include "UseItemInterface.generated.h"

class AItem;
class APlayerControllerGunfire;

UINTERFACE(Blueprintable, MinimalAPI)
class UUseItemInterface : public UInterface {
    GENERATED_BODY()
};

class IUseItemInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UseItem(APlayerControllerGunfire* PlayerController, TSubclassOf<AItem> ItemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUseItem(APlayerControllerGunfire* PlayerController, TSubclassOf<AItem> ItemClass);
    
};

