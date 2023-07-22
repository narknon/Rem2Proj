#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "MovieSceneDialogTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UMovieSceneDialogTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> DialogSections;
    
public:
    UMovieSceneDialogTrack();
    
    // Fix for true pure virtual functions not being implemented
};

