#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "MovieSceneEventTreeSectionData.h"
#include "MovieSceneEventTreeSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneEventTreeSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEventTreeSectionData EventData;
    
public:
    UMovieSceneEventTreeSection();
};

