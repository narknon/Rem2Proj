#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AI/Navigation/NavAgentInterface.h"
#include "AIGoalActor.generated.h"

class APawn;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API AAIGoalActor : public AActor, public INavAgentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* Pawn;
    
public:
    AAIGoalActor();
    
    // Fix for true pure virtual functions not being implemented
};

