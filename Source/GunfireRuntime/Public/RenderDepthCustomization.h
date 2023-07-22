#pragma once
#include "CoreMinimal.h"
#include "ActorCustomization.h"
#include "RenderDepthCustomization.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API URenderDepthCustomization : public UActorCustomization {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DepthStencilValue;
    
    URenderDepthCustomization();
};

