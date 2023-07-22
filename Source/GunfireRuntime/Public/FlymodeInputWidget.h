#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EInputDevice.h"
#include "FlymodeInputWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UFlymodeInputWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPreviewMode;
    
    UFlymodeInputWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleWaypointDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Populate(const EInputDevice Device, bool bIsPreview);
    
};

