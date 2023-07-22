#include "InspectStatBase.h"

FInspectStatBase::FInspectStatBase() {
    this->Icon = NULL;
    this->Type = EInspectStatType::Standard;
    this->Range = 0.00f;
    this->Primary = false;
    this->Hidden = false;
    this->Modifier = false;
}

