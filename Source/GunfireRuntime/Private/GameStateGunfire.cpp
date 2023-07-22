#include "GameStateGunfire.h"
#include "SequencerManager.h"
#include "TimeDilationManager.h"

void AGameStateGunfire::StartMatch() {
}

void AGameStateGunfire::RemoveGameStateInitializedListener(const FOnGameStateDelegate& Event) {
}

AGameStateGunfire* AGameStateGunfire::GetGunfireGameState(const UObject* WorldContextObject) {
    return NULL;
}

void AGameStateGunfire::AddGameStateInitializedListener(const FOnGameStateDelegate& Event) {
}

AGameStateGunfire::AGameStateGunfire() {
    this->TimeDilationManager = CreateDefaultSubobject<UTimeDilationManager>(TEXT("TimeDilatonManager"));
    this->SequencerManager = CreateDefaultSubobject<USequencerManager>(TEXT("SequencerManager"));
}

