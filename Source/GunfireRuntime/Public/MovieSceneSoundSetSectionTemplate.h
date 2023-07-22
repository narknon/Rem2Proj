#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneSoundSetSectionTemplateData.h"
#include "MovieSceneSoundSetSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSoundSetSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneSoundSetSectionTemplateData SoundSetData;
    
    GUNFIRERUNTIME_API FMovieSceneSoundSetSectionTemplate();
};

