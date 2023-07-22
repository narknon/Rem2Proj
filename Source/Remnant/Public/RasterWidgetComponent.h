#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "RasterWidgetComponent.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UPrimitiveComponent;
class UTexture;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REMNANT_API URasterWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialOverride;
    
    URasterWidgetComponent();
    UFUNCTION(BlueprintCallable)
    UTexture* GetWidgetTexture();
    
    UFUNCTION(BlueprintCallable)
    void ForceRedraw();
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* CreateWidgetMaterial(UPrimitiveComponent* Primitive, UMaterialInterface* SourceMaterial, FName MaterialTextureName, int32 ElementIndex);
    
};

