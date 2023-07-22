#include "AITacticalGraphNode.h"

AAITacticalGraphNode::AAITacticalGraphNode() {
    this->bStitchNeighbors = true;
    this->bDeferStitchUntilRequested = true;
    this->bValidateJump = false;
    this->CapsuleRadius = 35.00f;
    this->CapsuleHalfHeight = 90.00f;
    this->JumpInitialOffset = 20.00f;
    this->GravityScale = 1.00f;
    this->ArcMethod = EAutoArcType::ArcHeight;
    this->ArcHeight = 100.00f;
    this->JumpSpeed = 1000.00f;
    this->RetractDistance = 30.00f;
    this->NodeStatus = ETacticalGraphNodeStatus::Dirty;
}

