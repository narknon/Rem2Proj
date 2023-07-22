#pragma once
#include "CoreMinimal.h"
#include "SequencerUIEventPayload.h"
#include "MovieSceneUIEventSectionTemplateData.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneUIEventSectionTemplateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSequencerUIEventPayload UIEventPayload;
    
    GUNFIRERUNTIME_API FMovieSceneUIEventSectionTemplateData();
};

