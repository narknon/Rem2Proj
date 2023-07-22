#include "MovieSceneEventTreeTrack.h"

UMovieSceneEventTreeTrack::UMovieSceneEventTreeTrack() {
    this->bFireEventsWhenForwards = true;
    this->bFireEventsWhenBackwards = true;
    this->EventPosition = EFireEventsAtPosition::AfterSpawn;
}

