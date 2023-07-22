#pragma once
#include "CoreMinimal.h"
#include "NavMesh/NavMeshBoundsVolume.h"
#include "MapTileNav.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API AMapTileNav : public ANavMeshBoundsVolume {
    GENERATED_BODY()
public:
    AMapTileNav();
};

