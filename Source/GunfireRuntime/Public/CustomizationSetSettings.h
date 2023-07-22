#pragma once
#include "CoreMinimal.h"
#include "CustomizationSetSettings.generated.h"

class UActorCustomizationSet;

USTRUCT(BlueprintType)
struct FCustomizationSetSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UActorCustomizationSet> CustomizationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PreviewRequiredIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PreviewTags;
    
    GUNFIRERUNTIME_API FCustomizationSetSettings();
};

