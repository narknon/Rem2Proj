#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AI/Navigation/NavRelevantInterface.h"
#include "NavLinkHostInterface.h"
#include "AITacticalPointContainerInterface.h"
#include "AIData.generated.h"

class UAIDataContainer;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API AAIData : public AActor, public INavLinkHostInterface, public INavRelevantInterface, public IAITacticalPointContainerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawTacticalPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawTraversalLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawSpawnPoints;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIDataContainer* Data;
    
public:
    AAIData();
    
    // Fix for true pure virtual functions not being implemented
};

