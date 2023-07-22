#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CinematicPlayerSettings.h"
#include "OnSequencePlayingEventDelegate.h"
#include "OnSequenceSkipVoteChangedEventDelegate.h"
#include "OnSequenceUIRequestDelegate.h"
#include "OnServerPlayUpdateDelegate.h"
#include "SequenceReplicationState.h"
#include "SequencerUIEventPayload.h"
#include "Templates/SubclassOf.h"
#include "SequencerManager.generated.h"

class AActor;
class APlayerControllerGunfire;
class APlayerGunfire;
class APlayerState;
class UActionBase;
class UCinematicInstance_Base;
class UEventTreeComponent;
class UObject;
class USequencerManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API USequencerManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSequenceSkipVoteChangedEvent OnSkipVoteChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSequencePlayingEvent OnCinematicPrePlay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSequencePlayingEvent OnCinematicPlaying;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSequencePlayingEvent OnCinematicStopping;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnServerPlayUpdate OnServerFinishedAllSequences;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSequenceUIRequest OnSequenceUIRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSequenceReplicationState ReplicationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerInstanceCount, meta=(AllowPrivateAccess=true))
    int32 NumRunningInstancesOnServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActionBase> PossessedObjectAction;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCinematicInstance_Base*> CinematicInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> StoredCinematicAssets;
    
public:
    USequencerManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void UpdateSkipStatus(UObject* InSequence, bool ShouldSkip);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SpectatorJoinRunningInstance(APlayerControllerGunfire* Controller, UObject* CinematicAsset, FCinematicPlayerSettings CinematicSettings, AActor* Instigator, UEventTreeComponent* SourceComponent, bool Force);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SkipSequence(UObject* InSequence);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetupSequence_Client(UObject* CinematicAsset, FCinematicPlayerSettings CinematicSettings, AActor* Instigator, UEventTreeComponent* SourceComponent, int32 Tries);
    
    UFUNCTION(BlueprintCallable)
    void RequestUIEvent(FSequencerUIEventPayload EventPayload, bool IsShowing);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ProposeToSkip(UObject* InSequence, APlayerGunfire* Player);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerInstanceCount();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoined(APlayerState* NewPlayer);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyClientsFailedToStart(FCinematicPlayerSettings CinematicSettings, UObject* CinematicAsset, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void HandleSpectationChange(AActor* SpectateTarget, APlayerControllerGunfire* Controller);
    
    UFUNCTION(BlueprintCallable)
    static bool GetShowTimeCode();
    
    UFUNCTION(BlueprintCallable)
    UCinematicInstance_Base* GetSequenceInstanceForCinematicAsset(UObject* CinematicAsset);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USequencerManager* GetInstance(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    TArray<UCinematicInstance_Base*> GetActiveCinematicInstances();
    
};

