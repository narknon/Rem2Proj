#include "ItemStatInfo.h"

FItemStatInfo::FItemStatInfo() {
    this->Icon = NULL;
    this->Type = EInspectStatType::Standard;
    this->Primary = false;
    this->Hidden = false;
    this->CharacterStat = false;
}

