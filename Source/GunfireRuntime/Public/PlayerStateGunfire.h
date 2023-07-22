#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "ChatRestrictionChangedDelegate.h"
#include "EPlayerJoinState.h"
#include "JoinStateChangedDelegate.h"
#include "PlayerNameChangedDelegate.h"
#include "PlayerStatePawnChangedDelegate.h"
#include "PlayerTalkingChangedDelegate.h"
#include "PlayerStateGunfire.generated.h"

class ACharacterGunfire;
class APawn;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API APlayerStateGunfire : public APlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStatePawnChanged OnPawnChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerTalkingChanged OnTalkingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerNameChanged OnPlayerNameChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChatRestrictionChanged OnChatRestrictionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJoinStateChanged OnJoinStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* CachedPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ChatRestricted, meta=(AllowPrivateAccess=true))
    bool bIsChatRestricted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_JoinState, meta=(AllowPrivateAccess=true))
    EPlayerJoinState JoinState;
    
public:
    APlayerStateGunfire();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetChatRestricted(bool ChatRestricted);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_JoinState() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_ChatRestricted();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetJoinState(EPlayerJoinState NewState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHost() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsChatRestricted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetPlayerPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacterGunfire* GetPlayerCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerJoinState GetJoinState() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetIsTalking();
    
};

