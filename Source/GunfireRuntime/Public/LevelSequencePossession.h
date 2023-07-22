#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "CachedMeshBoundsSettings.h"
#include "LevelSequencePossession.generated.h"

class UMovieScenePossessableTrack;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FLevelSequencePossession {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPrimitiveComponent*, TEnumAsByte<ECollisionEnabled::Type>> CachedCollisionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPrimitiveComponent*, bool> CachedMipStreamingMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieScenePossessableTrack* PossessionTrackDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCachedMeshBoundsSettings> CachedBoundsSettings;
    
    FLevelSequencePossession();
};

