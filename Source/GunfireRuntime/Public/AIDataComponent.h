#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AI/Navigation/NavRelevantInterface.h"
#include "NavLinkHostInterface.h"
#include "AITacticalPointContainerInterface.h"
#include "AIDataComponent.generated.h"

class AAIData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UAIDataComponent : public UActorComponent, public INavLinkHostInterface, public INavRelevantInterface, public IAITacticalPointContainerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIData* AIData;
    
public:
    UAIDataComponent();
    UFUNCTION(BlueprintCallable)
    void SetState(bool Enabled);
    
    
    // Fix for true pure virtual functions not being implemented
};

