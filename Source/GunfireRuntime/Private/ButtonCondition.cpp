#include "ButtonCondition.h"

UButtonCondition::UButtonCondition() {
    this->Name = TEXT("Jump");
    this->State = ButtonState::Pressed;
    this->TimeInState = 0.00f;
    this->InputBufferTime = 0.00f;
    this->WindowStart = 0.00f;
    this->WindowEnd = 1000.00f;
    this->PersistValid = true;
    this->PersistNotValid = false;
}

