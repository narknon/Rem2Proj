#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EMusicState.h"
#include "EventRegionCharacter.h"
#include "EventRegionCharacterDelegateDelegate.h"
#include "EventRegionDelegateDelegate.h"
#include "EventRegionPlayerDelegateDelegate.h"
#include "EventRegion.generated.h"

class ACharacterGunfire;
class AEventRegion;
class APlayerController;
class ARemnantCharacter;
class UMusicSetAsset;
class UPersistenceComponent;
class URemnantQuestComponent;

UCLASS(Blueprintable)
class REMNANT_API AEventRegion : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMusicSetAsset* MusicSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EMusicState MusicState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoStartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoEndEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableCommitsWhenActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool StartsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Active, meta=(AllowPrivateAccess=true))
    bool Complete;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RegionHasUniqueAggroGroup;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventRegionDelegate OnBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventRegionDelegate OnEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventRegionPlayerDelegate OnPlayerEnter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventRegionPlayerDelegate OnPlayerExit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventRegionPlayerDelegate OnPlayerDead;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventRegionCharacterDelegate OnCharacterEnter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventRegionCharacterDelegate OnCharacterExit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventRegionCharacterDelegate OnCharacterDead;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventRegionDelegate OnUpdateActiveState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Players, meta=(AllowPrivateAccess=true))
    TArray<FEventRegionCharacter> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Players, meta=(AllowPrivateAccess=true))
    TArray<ACharacterGunfire*> NonPlayerCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Active, meta=(AllowPrivateAccess=true))
    bool Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Active, meta=(AllowPrivateAccess=true))
    bool Locked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Players, meta=(AllowPrivateAccess=true))
    TArray<APlayerController*> Players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URemnantQuestComponent*> RegisteredRegionComponents;
    
public:
    AEventRegion();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void PlayerExit(ARemnantCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void PlayerEnter(ARemnantCharacter* Character);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Players();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Active();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDead_Internal(uint8 Reason, ACharacterGunfire* Character, AActor* Cause);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterDead_Internal(uint8 Reason, ACharacterGunfire* Character, AActor* Cause);
    
public:
    UFUNCTION(BlueprintCallable)
    void LockEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInRegion(APlayerController* Controller) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerInRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterInRegion(ARemnantCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUniqueAggroGroup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLocalPlayerVisited() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ACharacterGunfire*> GetNonPlayerCharacters();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARemnantCharacter* GetFirstCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AEventRegion* GetEventRegionForActor(AActor* Context, FName EventRegionNameID, const bool FirstResultFallback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AEventRegion* GetEventRegionContainingActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FEventRegionCharacter> GetCharacters();
    
    UFUNCTION(BlueprintCallable)
    void End();
    
    UFUNCTION(BlueprintCallable)
    void CompleteEvent();
    
    UFUNCTION(BlueprintCallable)
    void CharacterExit(ACharacterGunfire* CharGunfire);
    
    UFUNCTION(BlueprintCallable)
    void CharacterEnter(ACharacterGunfire* CharGunfire);
    
    UFUNCTION(BlueprintCallable)
    void Begin();
    
};

