#pragma once
#include "CoreMinimal.h"
#include "PortalActorRecord.h"
#include "PortalActorTransition.generated.h"

class APortal;

USTRUCT(BlueprintType)
struct FPortalActorTransition : public FPortalActorRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APortal* TargetPortal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPortalActorRecord> AttachedActors;
    
    GUNFIRERUNTIME_API FPortalActorTransition();
};

