#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CinematicPlayerSettings.h"
#include "OnCinematicInstanceCompleteEventDelegate.h"
#include "CinematicInstance_Base.generated.h"

class AActor;
class UEventTreeComponent;

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API UCinematicInstance_Base : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinematicPlayerSettings CinematicSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* CinematicAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* CurrentSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentSequenceInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEventTreeComponent* CurrentSequenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCinematicInstanceCompleteEvent OnInstanceComplete;
    
    UCinematicInstance_Base();
    UFUNCTION(BlueprintCallable)
    bool WasForceCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnFinished();
    
};

