#include "EventTreeNode.h"

bool UEventTreeNode::Validate_Implementation(UEventTreeComponent* Component) const {
    return false;
}

void UEventTreeNode::Loop_Implementation(UEventTreeComponent* Component) const {
}

void UEventTreeNode::Join_Implementation(UEventTreeComponent* Component, APlayerController* JoiningController) const {
}

bool UEventTreeNode::IsComplete_Implementation(UEventTreeComponent* Component) const {
    return false;
}

void UEventTreeNode::End_Implementation(UEventTreeComponent* Component) const {
}

void UEventTreeNode::Begin_Implementation(UEventTreeComponent* Component) const {
}

UEventTreeNode::UEventTreeNode() {
}

