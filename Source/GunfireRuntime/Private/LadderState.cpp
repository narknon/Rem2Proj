#include "LadderState.h"

ULadderState::ULadderState() {
    this->LadderParams = NULL;
    this->GrabHeight = 50.00f;
    this->GrabOffset = 50.00f;
    this->SnapToRungOnEnter = true;
    this->RungAnimTag = ELadderDistanceAnimTag::None;
    this->SnapLerpMinimumDist = 0.00f;
}

