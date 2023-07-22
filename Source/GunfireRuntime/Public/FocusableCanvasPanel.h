#pragma once
#include "CoreMinimal.h"
#include "Components/CanvasPanel.h"
#include "FocusableCanvasPanel.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UFocusableCanvasPanel : public UCanvasPanel {
    GENERATED_BODY()
public:
    UFocusableCanvasPanel();
};

