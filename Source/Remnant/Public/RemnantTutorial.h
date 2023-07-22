#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RemnantTutorial.generated.h"

class AActor;
class APawn;

UCLASS(Blueprintable)
class REMNANT_API URemnantTutorial : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    URemnantTutorial();
    UFUNCTION(BlueprintCallable)
    void ShowTutorial(APawn* Player, AActor* ContextActor, bool bForceShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowTutorial(APawn* Player, AActor* ContextActor, bool bForceShow);
    
};

