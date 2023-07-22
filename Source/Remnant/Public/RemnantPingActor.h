#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ActionPing.h"
#include "ETailType.h"
#include "RemnantPingActor.generated.h"

class APlayerControllerGunfire;
class UTexture2D;

UCLASS(Blueprintable)
class REMNANT_API ARemnantPingActor : public AActor {
    GENERATED_BODY()
public:
    ARemnantPingActor();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPingDetails(float Duration, UTexture2D* Icon, FColor Color, ETailType Tail, const FActionPing PingDetails);
    
    UFUNCTION(BlueprintCallable)
    void OnCinematicEvent(APlayerControllerGunfire* PlayerController, bool bIsInCinematic);
    
};

