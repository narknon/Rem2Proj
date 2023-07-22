#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MeshOutlinerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UMeshOutlinerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartOutlined;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OutlineRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutlineStencilValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OutlineExclusionTag;
    
    UMeshOutlinerComponent();
    UFUNCTION(BlueprintCallable)
    void SetOwnerOutlined(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentlyOutlined() const;
    
};

