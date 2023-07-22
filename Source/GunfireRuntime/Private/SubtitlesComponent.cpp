#include "SubtitlesComponent.h"

void USubtitlesComponent::ServerRemoveSubtitle_Implementation(int32 ID) {
}
bool USubtitlesComponent::ServerRemoveSubtitle_Validate(int32 ID) {
    return true;
}

void USubtitlesComponent::ServerRemoveEmote_Implementation(AActor* Source) {
}
bool USubtitlesComponent::ServerRemoveEmote_Validate(AActor* Source) {
    return true;
}

void USubtitlesComponent::RemoveSubtitle(int32 ID) {
}

void USubtitlesComponent::RemoveEmoteInstance(AActor* Source) {
}

void USubtitlesComponent::ClientRemoveSubtitle_Implementation(int32 ID) {
}

void USubtitlesComponent::ClientRemoveEmote_Implementation(AActor* Source) {
}

void USubtitlesComponent::ClientAddSubtitle_Implementation(const FSubtitleInfo& Info) {
}

void USubtitlesComponent::ClientAddEmote_Implementation(AActor* Source, UActorComponent* SourceComponent, FName Emote) {
}

USubtitleInstance* USubtitlesComponent::AddSubtitle(FSubtitleInfo& SubtitleInfo) {
    return NULL;
}

UEmoteInstance* USubtitlesComponent::AddEmoteInstance(AActor* Source, UActorComponent* SourceComponent, FName Emote) {
    return NULL;
}

USubtitlesComponent::USubtitlesComponent() {
}

