#pragma once
#include "CoreMinimal.h"
#include "TabGroup.generated.h"

class UPanelWidget;
class UTabButton;

USTRUCT(BlueprintType)
struct FTabGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTabButton* Widget;
    
    GUNFIRERUNTIME_API FTabGroup();
};

