#include "AILadderCondition.h"

UAILadderCondition::UAILadderCondition() {
    this->AreaFlag = ENavAreaFlag::Default;
    this->PathSearch = ELadderPathSearch::TARGET_ABOVE;
    this->PathToValidate = ELadderPathToValidate::BestPath;
    this->BestPath = true;
}

