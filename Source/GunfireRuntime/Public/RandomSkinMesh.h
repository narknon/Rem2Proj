#pragma once
#include "CoreMinimal.h"
#include "RandomMesh.h"
#include "RandomSkinMesh.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FRandomSkinMesh : public FRandomMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> Mesh;
    
    GUNFIRERUNTIME_API FRandomSkinMesh();
};

