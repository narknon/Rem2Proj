#pragma once
#include "CoreMinimal.h"
#include "Tracks/MovieSceneEventTrack.h"
#include "Tracks/MovieSceneFadeTrack.h"
#include "MovieScenePriorityFadeTrack.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UMovieScenePriorityFadeTrack : public UMovieSceneFloatTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFireEventsAtPosition EventPosition;
    
    /*UMovieScenePriorityFadeTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());*/

    virtual bool SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const override;
    virtual UMovieSceneSection* CreateNewSection() override;

#if WITH_EDITORONLY_DATA
    virtual FText GetDefaultDisplayName() const override;
#endif
};

