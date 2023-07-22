#include "EventTreeNode_Stage.h"

UEventTreeNode_Stage::UEventTreeNode_Stage() {
    this->Action = EStageAction::Push;
    this->SequenceGroup = NULL;
    this->OnlyTargetInstigator = false;
}

