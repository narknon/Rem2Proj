#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MinimapTileSupport.generated.h"

class UPersistenceComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API AMinimapTileSupport : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UStaticMesh>> MinimapStaticMeshList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> HiddenAreaIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RevealMinimap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<int32> RevealedHiddenAreasIDs;
    
    AMinimapTileSupport();
};

