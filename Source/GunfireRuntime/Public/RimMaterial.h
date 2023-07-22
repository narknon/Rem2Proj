#pragma once
#include "CoreMinimal.h"
#include "RimMaterial.generated.h"

class UMaterialInstanceDynamic;
class UMeshComponent;

USTRUCT(BlueprintType)
struct FRimMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* Mesh;
    
    GUNFIRERUNTIME_API FRimMaterial();
};

