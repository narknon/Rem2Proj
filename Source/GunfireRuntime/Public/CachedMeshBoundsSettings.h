#pragma once
#include "CoreMinimal.h"
#include "CachedMeshBoundsSettings.generated.h"

class USkinnedMeshComponent;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FCachedMeshBoundsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkinnedMeshComponent* TargetMeshComponent;
    
    FCachedMeshBoundsSettings();
};

