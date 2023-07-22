#pragma once
#include "CoreMinimal.h"
#include "RandomMesh.h"
#include "RandomStaticMesh.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FRandomStaticMesh : public FRandomMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> Mesh;
    
    GUNFIRERUNTIME_API FRandomStaticMesh();
};

