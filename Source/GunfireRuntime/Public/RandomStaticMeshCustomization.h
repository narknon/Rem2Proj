#pragma once
#include "CoreMinimal.h"
#include "RandomMeshCustomization.h"
#include "RandomStaticMesh.h"
#include "RandomStaticMeshCustomization.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API URandomStaticMeshCustomization : public URandomMeshCustomization {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandomStaticMesh> Meshes;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetMaterialsOnApply;
    
    URandomStaticMeshCustomization();
};

