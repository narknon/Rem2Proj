#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomizationSetSettings.h"
#include "ImpactDescriptorSet.h"
#include "SoundSetSettings.h"
#include "EffectsPreviewSettings.generated.h"

class UPhysicalMaterial;

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class GUNFIRERUNTIME_API UEffectsPreviewSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPhysicalMaterial> PreviewImpactMaterial;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpactDescriptorSet ImpactSet;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundSetSettings> SoundSetSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomizationSetSettings CustomizationSettings;
    
    UEffectsPreviewSettings();
};

