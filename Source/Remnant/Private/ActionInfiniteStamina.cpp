#include "ActionInfiniteStamina.h"
#include "Net/UnrealNetwork.h"

void UActionInfiniteStamina::UpdateInfiniteStamina() {
}

void UActionInfiniteStamina::OnRep_HasInfiniteStamina() {
}

void UActionInfiniteStamina::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UActionInfiniteStamina, bHasInfiniteStamina);
}

UActionInfiniteStamina::UActionInfiniteStamina() {
    this->AIMaxDistance = 2000.00f;
    this->UpdateFrequency = 0.50f;
    this->bHasInfiniteStamina = false;
}

