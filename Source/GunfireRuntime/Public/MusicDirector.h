#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EMusicIntensity.h"
#include "MusicIntensityDelegateDelegate.h"
#include "MusicDirector.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UMusicDirector : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMusicIntensityDelegate OnMusicIntensityChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MusicIntensity, meta=(AllowPrivateAccess=true))
    EMusicIntensity MusicIntensity;
    
    UMusicDirector();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MusicIntensity();
    
};

