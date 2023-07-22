#pragma once
#include "CoreMinimal.h"
#include "FocusInfo.generated.h"

class UFocusButtonWidget;
class UPanelWidget;

USTRUCT(BlueprintType)
struct FFocusInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFocusButtonWidget* Widget;
    
    GUNFIRERUNTIME_API FFocusInfo();
};

