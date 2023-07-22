#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "EventTreePayload.h"
#include "MovieSceneEventTreeSectionData.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FMovieSceneEventTreeSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventTreePayload> KeyValues;
    
public:
    FMovieSceneEventTreeSectionData();
};

