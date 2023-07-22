#pragma once
#include "CoreMinimal.h"
#include "ActorCustomization.h"
#include "SceneCustomization.generated.h"

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API USceneCustomization : public UActorCustomization {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RequiredSoundTags;
    
    USceneCustomization();
};

