#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneUIEventSectionTemplateData.h"
#include "MovieSceneUIEventSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneUIEventSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneUIEventSectionTemplateData UIEventData;
    
    GUNFIRERUNTIME_API FMovieSceneUIEventSectionTemplate();
};

