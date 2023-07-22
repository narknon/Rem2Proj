#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ExplorableMinimapModelOverlay.generated.h"

class AActor;
class UUserWidget;

UINTERFACE(Blueprintable, MinimalAPI)
class UExplorableMinimapModelOverlay : public UInterface {
    GENERATED_BODY()
};

class IExplorableMinimapModelOverlay : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UUserWidget* CreateWidget(AActor* MinimapActor);
    
};

