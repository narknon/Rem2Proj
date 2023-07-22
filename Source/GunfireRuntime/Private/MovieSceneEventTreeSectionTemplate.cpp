#include "MovieSceneEventTreeSectionTemplate.h"

FMovieSceneEventTreeSectionTemplate::FMovieSceneEventTreeSectionTemplate() {
    this->bFireEventsWhenForwards = false;
    this->bFireEventsWhenBackwards = false;
    this->ParentTrack = NULL;
}

