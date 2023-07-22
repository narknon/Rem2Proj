#pragma once
#include "CoreMinimal.h"
#include "PortalActorRecord.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPortalActorRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    GUNFIRERUNTIME_API FPortalActorRecord();
};

