#include "RemnantGameBoardComponent.h"
#include "Net/UnrealNetwork.h"

void URemnantGameBoardComponent::UpdatePieceActorLocations() {
}

void URemnantGameBoardComponent::StartTurn(bool bIsResuming) {
}

void URemnantGameBoardComponent::StartGame(bool bResetBoardState, AActor* Player, AActor* Opponent) {
}

void URemnantGameBoardComponent::PauseTurn() {
}

void URemnantGameBoardComponent::OnRep_CurrentPlayer() {
}

bool URemnantGameBoardComponent::IsGameInProgress() const {
    return false;
}

void URemnantGameBoardComponent::GetPositionsForUser(EBoardUser User, TArray<FGraphPosition>& OutPositions) {
}

void URemnantGameBoardComponent::EndTurn() {
}

void URemnantGameBoardComponent::EndGame(bool bResetBoard, EBoardLayout GraphLayout) {
}

void URemnantGameBoardComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URemnantGameBoardComponent, bIsPlaying);
    DOREPLIFETIME(URemnantGameBoardComponent, CurrentTurn);
    DOREPLIFETIME(URemnantGameBoardComponent, CurrentPlayer);
}

URemnantGameBoardComponent::URemnantGameBoardComponent() {
    this->PlayerPieceBase = NULL;
    this->PlayerPotentialMoveVisualBase = NULL;
    this->AIPieceBase = NULL;
    this->bAllowDiagonalMovement = false;
    this->bSlotInfoDeterminesDiagonalMovement = false;
    this->bScaleRulesByDifficulty = false;
    this->bUseDefaultConfiguration = false;
    this->bIsPlaying = false;
    this->CurrentTurn = EBoardUser::None;
    this->CurrentAI = NULL;
    this->CurrentPlayer = NULL;
}

