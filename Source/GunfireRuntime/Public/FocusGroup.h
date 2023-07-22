#pragma once
#include "CoreMinimal.h"
#include "Components/CanvasPanel.h"
#include "FocusGroup.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UFocusGroup : public UCanvasPanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowInactiveFocus;
    
    UFocusGroup();
    UFUNCTION(BlueprintCallable)
    void ShowInactiveFocus(bool Show);
    
    UFUNCTION(BlueprintCallable)
    void Focus();
    
};

