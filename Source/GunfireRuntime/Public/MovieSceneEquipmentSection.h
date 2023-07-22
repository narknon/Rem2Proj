#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "MovieSceneEquipmentSectionData.h"
#include "MovieSceneEquipmentSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneEquipmentSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEquipmentSectionData EquipmentData;
    
public:
    UMovieSceneEquipmentSection();
};

