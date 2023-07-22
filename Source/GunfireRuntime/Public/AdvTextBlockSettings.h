#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FontStyleConfigEntry.h"
#include "AdvTextBlockSettings.generated.h"

UCLASS(Blueprintable, Config=Game)
class GUNFIRERUNTIME_API UAdvTextBlockSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FFontStyleConfigEntry> FontStyles;
    
    UAdvTextBlockSettings();
};

