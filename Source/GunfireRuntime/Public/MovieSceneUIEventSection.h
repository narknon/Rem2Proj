#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneSection.h"
#include "SequencerUIEventPayload.h"
#include "MovieSceneUIEventSection.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UMovieSceneUIEventSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ObjectBindingID;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSequencerUIEventPayload UIEventPayload;
    
    UMovieSceneUIEventSection();
};

