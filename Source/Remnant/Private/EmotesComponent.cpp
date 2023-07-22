#include "EmotesComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void UEmotesComponent::UnlockEmote(TSubclassOf<UEmote> NewEmote) {
}

void UEmotesComponent::SlotEmote(int32 Slot, TSubclassOf<UEmote> Emote) {
}

void UEmotesComponent::ServerUpdateSlots_Implementation(const TArray<TSubclassOf<UEmote>>& NewSlots) {
}
bool UEmotesComponent::ServerUpdateSlots_Validate(const TArray<TSubclassOf<UEmote>>& NewSlots) {
    return true;
}

void UEmotesComponent::ServerUnlockEmote_Implementation(TSubclassOf<UEmote> Emote) {
}
bool UEmotesComponent::ServerUnlockEmote_Validate(TSubclassOf<UEmote> Emote) {
    return true;
}

UTexture2D* UEmotesComponent::RequestEmoteIcon(TSubclassOf<UEmote> Emote, FName Reason) {
    return NULL;
}

void UEmotesComponent::OnLoadIcon(TSubclassOf<UEmote> Emote) {
}

bool UEmotesComponent::HasEmote(TSubclassOf<UEmote> Emote) {
    return false;
}

TArray<UEmote*> UEmotesComponent::GetUnlockedEmotes(const TArray<TSubclassOf<UEmote>>& IgnoreList) {
    return TArray<UEmote*>();
}

UEmote* UEmotesComponent::GetEmoteForSlot(int32 Index) const {
    return NULL;
}

void UEmotesComponent::ClearEmoteIcon(TSubclassOf<UEmote> Emote, FName Reason) {
}

void UEmotesComponent::ClearAllEmoteIcons(FName Reason) {
}

void UEmotesComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEmotesComponent, Slots);
    DOREPLIFETIME(UEmotesComponent, UnlockedEmotes);
}

UEmotesComponent::UEmotesComponent() {
}

