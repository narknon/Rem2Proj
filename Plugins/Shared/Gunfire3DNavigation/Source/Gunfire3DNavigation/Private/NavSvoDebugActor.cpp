#include "NavSvoDebugActor.h"
#include "Components/SceneComponent.h"

ANavSvoDebugActor::ANavSvoDebugActor() {
    this->AgentRadius = 0.00f;
    this->AgentHeight = 0.00f;
    this->MaxPathSearchNodes = 2048;
    this->PathHeuristicScale = 2.00f;
    this->NodeBaseTraversalCost = 1.00f;
    this->PathCostLimit = 0.00f;
    this->bAllowPartialPath = true;
    this->bStringPullPath = true;
    this->bSmoothPath = true;
    this->PathLength = 0.00f;
    this->PathCost = 0.00f;
    this->NumPathNodesVisited = 0;
    this->NumPathNodesQueried = 0;
    this->NumPathNodesOpened = 0;
    this->NumPathNodesReopened = 0;
    this->QueryMemoryUsed = 0;
    this->PathSearchTime = 0.00f;
    this->bIsPartialPath = false;
    this->bPathExists = false;
    this->bPathNodeLimitReached = false;
    this->bDrawPath = true;
    this->bDrawPathNodes = true;
    this->bDrawPathSearch = false;
    this->CurrentPathSearchStep = 0;
    this->bAutoStepPathSearch = true;
    this->PathSearchAutoStepRate = 5;
    this->MaxRaycastSearchNodes = 4096;
    this->bDrawRaycast = false;
    this->bDrawRaycastSearch = false;
    this->CurrentRaycastStep = 0;
    this->bAutoStepRaycastSearch = true;
    this->RaycastSearchAutoStepRate = 5;
    this->bDrawNeighbors = false;
    this->StartPosition = CreateDefaultSubobject<USceneComponent>(TEXT("StartPosition"));
    this->EndPosition = CreateDefaultSubobject<USceneComponent>(TEXT("EndPosition"));
    this->NavData = NULL;
    this->StartSprite = NULL;
    this->EndSprite = NULL;
}

