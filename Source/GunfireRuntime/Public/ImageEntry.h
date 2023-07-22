#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "EInputDevice.h"
#include "HierarchicalEditInterface.h"
#include "InheritableObject.h"
#include "ImageEntry.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UImageEntry : public UInheritableObject, public IHierarchicalEditInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputDevice Device;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ImageBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VerticalAlignmentOffset;
    
    UImageEntry();
    
    // Fix for true pure virtual functions not being implemented
};

