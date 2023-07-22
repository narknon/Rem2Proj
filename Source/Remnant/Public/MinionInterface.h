#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MinionInterface.generated.h"

class UTexture2D;

UINTERFACE(Blueprintable, MinimalAPI)
class UMinionInterface : public UInterface {
    GENERATED_BODY()
};

class IMinionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UTexture2D*> GetStateIcons() const;
    
};

