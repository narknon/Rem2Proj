#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MinionDestroyDelegateDelegate.h"
#include "MinionDisplayDelegateDelegate.h"
#include "MinionComponent.generated.h"

class AActor;
class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REMNANT_API UMinionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Summoner;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinionDestroyDelegate MinionDestroyedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinionDisplayDelegate DisplayDataUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DisplayIcon;
    
    UMinionComponent();
    UFUNCTION(BlueprintCallable)
    void SetValid(bool IsMinionValid);
    
    UFUNCTION(BlueprintCallable)
    void NotifyDisplayDataUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidMinion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSummonerStat(FName StatName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpawnTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxMinionsForCause(AActor* Cause, int32 Bonus);
    
    UFUNCTION(BlueprintCallable)
    void DestroyMinion();
    
};

