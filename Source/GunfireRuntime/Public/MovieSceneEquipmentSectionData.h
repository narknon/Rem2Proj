#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "EquipmentPayload.h"
#include "MovieSceneEquipmentSectionData.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FMovieSceneEquipmentSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEquipmentPayload> KeyValues;
    
public:
    FMovieSceneEquipmentSectionData();
};

