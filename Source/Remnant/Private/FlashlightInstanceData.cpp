#include "FlashlightInstanceData.h"
#include "Net/UnrealNetwork.h"

void UFlashlightInstanceData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFlashlightInstanceData, Charge);
    DOREPLIFETIME(UFlashlightInstanceData, Depleted);
    DOREPLIFETIME(UFlashlightInstanceData, On);
}

UFlashlightInstanceData::UFlashlightInstanceData() {
    this->Charge = 1.00f;
    this->Depleted = false;
    this->On = false;
}

