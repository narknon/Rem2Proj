#include "LadderObstructionCondition.h"

ULadderObstructionCondition::ULadderObstructionCondition() {
    this->Range = 220.00f;
    this->TestLOS = false;
    this->ObstructionMustBeOnLadder = true;
    this->CheckDirection = ELadderDirection::EVERYWHERE;
}

