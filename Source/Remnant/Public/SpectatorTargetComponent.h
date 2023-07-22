#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpectatorTargetUnavailDelegateDelegate.h"
#include "SpectatorTargetComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REMNANT_API USpectatorTargetComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpectatorTargetUnavailDelegate OnNotifySpectatorTargetUnavail;
    
    USpectatorTargetComponent();
    UFUNCTION(BlueprintCallable)
    void OnSpectatorTargetUnavailable();
    
};

