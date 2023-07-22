#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AITacticalPointContainerInterface.h"
#include "AICustomTacticalPoint.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API AAICustomTacticalPoint : public AActor, public IAITacticalPointContainerInterface {
    GENERATED_BODY()
public:
    AAICustomTacticalPoint();
    
    // Fix for true pure virtual functions not being implemented
};

