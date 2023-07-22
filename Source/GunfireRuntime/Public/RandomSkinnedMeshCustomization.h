#pragma once
#include "CoreMinimal.h"
#include "RandomMeshCustomization.h"
#include "RandomSkinMesh.h"
#include "RandomSkinnedMeshCustomization.generated.h"

class UAnimInstance;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API URandomSkinnedMeshCustomization : public URandomMeshCustomization {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandomSkinMesh> Meshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> AnimInstanceOverride;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetMaterialsOnApply;
    
    URandomSkinnedMeshCustomization();
};

