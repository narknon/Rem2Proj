#pragma once
#include "CoreMinimal.h"
#include "ActorCustomization.h"
#include "TagCustomization.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UTagCustomization : public UActorCustomization {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AnimSoundTags;
    
    UTagCustomization();
};

