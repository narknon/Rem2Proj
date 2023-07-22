#pragma once
#include "CoreMinimal.h"
#include "EHudInteractiveType.h"
#include "HudInteractive.generated.h"

class AActor;
class UInteractiveState;

USTRUCT(BlueprintType)
struct FHudInteractive {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHudInteractiveType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInteractiveState* InteractiveState;
    
    GUNFIRERUNTIME_API FHudInteractive();
};

