#include "CinematicPlayerSettings.h"

FCinematicPlayerSettings::FCinematicPlayerSettings() {
    this->HideOtherPlayers = false;
    this->ResetNonMVPs = false;
    this->ResetCameraOnComplete = false;
    this->ShowSkipCinematic = false;
    this->DefaultToPlayerCameraOnFinish = false;
    this->UseLocalAreaRelevance = false;
    this->OnlyShowCameraToInstigator = false;
    this->InstigatorPawn = NULL;
    this->RequiredReplicatedActorsToStart = 0;
    this->IsNetworkedCinematic = false;
    this->ShotTarget = NULL;
    this->IgnoreShotTargetRotation = false;
    this->ShouldFireEndCinematicEvent = false;
    this->ReplicationChangeID = 0;
    this->MediaTexture = NULL;
}

