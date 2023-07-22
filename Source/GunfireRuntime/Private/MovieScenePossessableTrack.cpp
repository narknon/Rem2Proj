#include "MovieScenePossessableTrack.h"

UMovieScenePossessableTrack::UMovieScenePossessableTrack() {
    this->SpawnActorIfNotFound = true;
    this->PersistSpawnedActor = false;
    this->PossessLocalMalePlayer = false;
    this->PossessLocalFemalePlayer = false;
    this->PlayerPossessionType = EPlayerPossessionType::NoPlayerPossession;
    this->GenderTarget = EPlayerPossessionGenderTarget::Male;
    this->DisableAI = true;
}

