#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AmbientSpawnRegion.generated.h"

class UAmbientSpawnManager;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API AAmbientSpawnRegion : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SpawnTags;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAmbientSpawnManager* AmbientSpawnManager;
    
public:
    AAmbientSpawnRegion();
};

