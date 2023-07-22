#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FocusTooltipWidget.generated.h"

class UFocusButtonWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UFocusTooltipWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* TooltipParentWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFocusButtonWidget*> ChildButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFocusButtonWidget* ParentWidgetFocusButton;
    
public:
    UFocusTooltipWidget();
};

