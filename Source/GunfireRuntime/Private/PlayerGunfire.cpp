#include "PlayerGunfire.h"
#include "InputStateComponent.h"

bool APlayerGunfire::IsPlayerTargeted() {
    return false;
}

APlayerGunfire::APlayerGunfire() {
    this->InputStateComponent = CreateDefaultSubobject<UInputStateComponent>(TEXT("InputStateComponent"));
}

