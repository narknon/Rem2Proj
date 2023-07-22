#include "MusicDirector.h"
#include "Net/UnrealNetwork.h"

void UMusicDirector::OnRep_MusicIntensity() {
}

void UMusicDirector::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMusicDirector, MusicIntensity);
}

UMusicDirector::UMusicDirector() {
    this->MusicIntensity = EMusicIntensity::Ambient;
}

