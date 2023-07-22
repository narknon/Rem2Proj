#pragma once
#include "CoreMinimal.h"
#include "Tracks/MovieSceneEventTrack.h"
#include "Tracks/MovieSceneFadeTrack.h"
#include "MovieScenePriorityFadeTrack.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UMovieScenePriorityFadeTrack : public UMovieSceneFadeTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFireEventsAtPosition EventPosition;
    
    UMovieScenePriorityFadeTrack();
};

