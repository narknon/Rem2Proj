#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Blueprint/UserWidget.h"
#include "CheatInputAction.h"
#include "CheatToastWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UCheatToastWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UCheatToastWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeCheat(const FCheatInputAction& Cheat, const TArray<FKey>& ActivationKeys);
    
};

