#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneEquipmentSectionData.h"
#include "MovieSceneEquipmentSectionTemplate.generated.h"

class UMovieSceneEquipmentTrack;

USTRUCT(BlueprintType)
struct FMovieSceneEquipmentSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEquipmentSectionData EquipmentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneEquipmentTrack* ParentTrack;
    
    GUNFIRERUNTIME_API FMovieSceneEquipmentSectionTemplate();
};

