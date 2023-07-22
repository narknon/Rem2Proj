#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneDialogSectionTemplateData.h"
#include "MovieSceneDialogSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneDialogSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneDialogSectionTemplateData DialogData;
    
    GUNFIRERUNTIME_API FMovieSceneDialogSectionTemplate();
};

