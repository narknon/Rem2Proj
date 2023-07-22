#include "AnimNotifyState_TimeDilationState.h"

UAnimNotifyState_TimeDilationState::UAnimNotifyState_TimeDilationState() {
    this->Global = false;
    this->OverrideStartTimeDilation = false;
    this->StartTimeDilation = 1.00f;
    this->EndTimeDilation = 1.00f;
    this->bUseOnExitDilation = false;
    this->OnExitDilation = 1.00f;
    this->IsEaseIn = true;
    this->SmoothingExponent = 2.00f;
    this->bStateTransient = true;
}

