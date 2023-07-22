#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "ExplorableMinimapTooltip.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UExplorableMinimapTooltip : public UWidgetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ToolTipText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TooltipHideDelay;
    
    UExplorableMinimapTooltip();
};

