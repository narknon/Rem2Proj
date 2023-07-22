#pragma once
#include "CoreMinimal.h"
#include "ActorCustomizationMaterialParam.h"
#include "ActorCustomizationMaterialReplacement.h"
#include "MeshCustomizationBase.h"
#include "StaticMeshCustomization.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UStaticMeshCustomization : public UMeshCustomizationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> VisualTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AnimSoundTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorCustomizationMaterialReplacement> MaterialReplacements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorCustomizationMaterialParam> MaterialParams;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetMaterialsOnApply;
    
    UStaticMeshCustomization();
};

