#pragma once
#include "CoreMinimal.h"
#include "SceneCustomization.h"
#include "Templates/SubclassOf.h"
#include "AttachActorCustomization.generated.h"

class AActor;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAttachActorCustomization : public USceneCustomization {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorBP;
    
    UAttachActorCustomization();
};

