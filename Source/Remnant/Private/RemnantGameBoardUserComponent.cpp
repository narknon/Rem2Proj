#include "RemnantGameBoardUserComponent.h"
#include "Net/UnrealNetwork.h"

void URemnantGameBoardUserComponent::ServerHandleGamePieceFocusEvent_Implementation(AActor* Actor, const FGraphPosition& TargetPosition, const FGraphPosition& RootPosition) {
}
bool URemnantGameBoardUserComponent::ServerHandleGamePieceFocusEvent_Validate(AActor* Actor, const FGraphPosition& TargetPosition, const FGraphPosition& RootPosition) {
    return true;
}

void URemnantGameBoardUserComponent::ServerCleanupGame_Implementation() {
}
bool URemnantGameBoardUserComponent::ServerCleanupGame_Validate() {
    return true;
}

void URemnantGameBoardUserComponent::NotifyGamePieceFocusEvent(AActor* Actor, ECursorInteractType InteractType) {
}

void URemnantGameBoardUserComponent::ClientUpdateMovePieces_Implementation(const TArray<FCachedPotentialMovePieceInfo>& PositionInfo, bool bSetVisible, bool bApplyToAll, bool bClearInfo) {
}

void URemnantGameBoardUserComponent::ClientSetPlayerControlsActive_Implementation(bool bDoActivate) {
}

void URemnantGameBoardUserComponent::ClientSetCursorBindings_Implementation(bool bDoActivate) {
}

void URemnantGameBoardUserComponent::ClientInitializeForGame_Implementation(URemnantGameBoardComponent* GameBoardComponent) {
}

void URemnantGameBoardUserComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URemnantGameBoardUserComponent, GameBoard);
}

URemnantGameBoardUserComponent::URemnantGameBoardUserComponent() {
    this->GameBoard = NULL;
}

