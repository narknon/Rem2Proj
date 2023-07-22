#include "UseableItemActivationInstance.h"

void UUseableItemActivationInstance::OnOwnerStateChange(const FName& StateName, const FName& PreviousStateName) {
}

void UUseableItemActivationInstance::OnOwnerInteractive(const FName& StateName, AActor* Other) {
}

UUseableItemActivationInstance::UUseableItemActivationInstance() {
    this->OwningItem = NULL;
}

