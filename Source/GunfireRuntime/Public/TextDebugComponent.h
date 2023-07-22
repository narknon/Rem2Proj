#pragma once
#include "CoreMinimal.h"
#include "Components/TextRenderComponent.h"
#include "TextDebugComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UTextDebugComponent : public UTextRenderComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QueryDelay;
    
    UTextDebugComponent();
};

