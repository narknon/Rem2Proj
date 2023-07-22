#include "EventTreeNode_Cinematic_Base.h"

void UEventTreeNode_Cinematic_Base::OnSequenceTriggerForEventTree(FName TriggerName) {
}

void UEventTreeNode_Cinematic_Base::OnClientSequencerFinishedCinematic(FCinematicPlayerSettings Settings, UObject* CurrentCinematic, AActor* Instigator) {
}

void UEventTreeNode_Cinematic_Base::OnCinematicSkipVoteEvent(UObject* CinematicAsset, bool Skipped) {
}

void UEventTreeNode_Cinematic_Base::OnCinematicFinishedCallback(UCinematicInstance_Base* CinematicInstance) {
}

UEventTreeNode_Cinematic_Base::UEventTreeNode_Cinematic_Base() {
    this->HideOtherPlayers = true;
    this->ResetNonMVPs = true;
    this->ResetCameraOnComplete = false;
    this->ShowSkipCinematic = true;
    this->DefaultToPlayerCameraOnFinish = false;
    this->UseLocalAreaRelevance = false;
    this->OnlyShowCameraToInstigator = false;
    this->StoredComponent = NULL;
}

