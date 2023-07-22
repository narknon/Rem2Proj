#pragma once
#include "CoreMinimal.h"
#include "ActorCustomizationMaterialParam.h"
#include "ActorCustomizationMaterialReplacement.h"
#include "RandomMesh.generated.h"

USTRUCT(BlueprintType)
struct FRandomMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> VisualTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AnimSoundTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorCustomizationMaterialReplacement> MaterialReplacements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorCustomizationMaterialParam> MaterialParams;
    
    GUNFIRERUNTIME_API FRandomMesh();
};

