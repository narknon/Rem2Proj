#include "MovieScenePriorityFadeTrack.h"
#include "Sections/MovieSceneFadeSection.h"

#define LOCTEXT_NAMESPACE "MovieScenePriorityFadeTrack"

/*UMovieScenePriorityFadeTrack::UMovieScenePriorityFadeTrack() {
    this->EventPosition = EFireEventsAtPosition::AtStartOfEvaluation;
}*/

bool UMovieScenePriorityFadeTrack::SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const
{
    return SectionClass == UMovieSceneFadeSection::StaticClass();
}

UMovieSceneSection* UMovieScenePriorityFadeTrack::CreateNewSection()
{
    return NewObject<UMovieSceneFadeSection>(this, NAME_None, RF_Transactional);
}

#if WITH_EDITORONLY_DATA
FText UMovieScenePriorityFadeTrack::GetDefaultDisplayName() const
{
    return LOCTEXT("TrackName", "Fade");
}
#endif

#undef LOCTEXT_NAMESPACE