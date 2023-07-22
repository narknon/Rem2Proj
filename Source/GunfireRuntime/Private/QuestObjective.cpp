#include "QuestObjective.h"
#include "Net/UnrealNetwork.h"

void UQuestObjective::SetTimer(float Time) {
}

void UQuestObjective::SetRefActor(AActor* Actor) {
}

void UQuestObjective::SetPinned(bool ShouldBePinned) {
}

void UQuestObjective::SetCounter(int32 Current, int32 Max) {
}

void UQuestObjective::ResetObjective() {
}

void UQuestObjective::ResetCounter() {
}

void UQuestObjective::OnRep_ObjectiveData() {
}

void UQuestObjective::OnInitializeQuest_Implementation() {
}

bool UQuestObjective::IsObjectiveComplete() {
    return false;
}

bool UQuestObjective::IsObjectiveActive() {
    return false;
}

void UQuestObjective::IncrementCounter(bool AutoComplete) {
}

FName UQuestObjective::GetNameID() {
    return NAME_None;
}

void UQuestObjective::CompleteObjective(EQuestResult ObjectiveResult) {
}

void UQuestObjective::ClearTimer(bool bSilent) {
}

void UQuestObjective::ActivateObjective(bool AutoCompleteActiveObjectives) {
}

void UQuestObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UQuestObjective, CounterMax);
    DOREPLIFETIME(UQuestObjective, Pinned);
    DOREPLIFETIME(UQuestObjective, State);
    DOREPLIFETIME(UQuestObjective, Result);
    DOREPLIFETIME(UQuestObjective, Counter);
    DOREPLIFETIME(UQuestObjective, Timer);
    DOREPLIFETIME(UQuestObjective, RefActor);
}

UQuestObjective::UQuestObjective() {
    this->CounterMax = 0;
    this->Hidden = false;
    this->Pinned = false;
    this->State = EQuestState::None;
    this->Result = EQuestResult::Success;
    this->Counter = 0;
    this->Timer = 0.00f;
    this->RefActor = NULL;
}

