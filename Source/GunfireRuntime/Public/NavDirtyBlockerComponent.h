#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "NavDirtyBlockerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UNavDirtyBlockerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Extent;
    
    UNavDirtyBlockerComponent();
    UFUNCTION(BlueprintCallable)
    void UnblockDirty(bool DirtyNav);
    
    UFUNCTION(BlueprintCallable)
    void BlockDirty();
    
};

