#include "LadderCacheComponent.h"
#include "Net/UnrealNetwork.h"

void ULadderCacheComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULadderCacheComponent, InternalOccupantCache);
}

ULadderCacheComponent::ULadderCacheComponent() {
    this->RungSpacing = 30.00f;
    this->Link = NULL;
}

