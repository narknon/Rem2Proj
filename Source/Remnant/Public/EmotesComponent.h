#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EmoteIconState.h"
#include "OnIconLoadedEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "EmotesComponent.generated.h"

class UEmote;
class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REMNANT_API UEmotesComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIconLoadedEvent OnIconLoaded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UEmote>> Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UEmote>> UnlockedEmotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEmoteIconState> IconStates;
    
public:
    UEmotesComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UnlockEmote(TSubclassOf<UEmote> NewEmote);
    
    UFUNCTION(BlueprintCallable)
    void SlotEmote(int32 Slot, TSubclassOf<UEmote> Emote);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateSlots(const TArray<TSubclassOf<UEmote>>& NewSlots);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnlockEmote(TSubclassOf<UEmote> Emote);
    
public:
    UFUNCTION(BlueprintCallable)
    UTexture2D* RequestEmoteIcon(TSubclassOf<UEmote> Emote, FName Reason);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLoadIcon(TSubclassOf<UEmote> Emote);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEmote(TSubclassOf<UEmote> Emote);
    
    UFUNCTION(BlueprintCallable)
    TArray<UEmote*> GetUnlockedEmotes(const TArray<TSubclassOf<UEmote>>& IgnoreList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEmote* GetEmoteForSlot(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearEmoteIcon(TSubclassOf<UEmote> Emote, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllEmoteIcons(FName Reason);
    
};

