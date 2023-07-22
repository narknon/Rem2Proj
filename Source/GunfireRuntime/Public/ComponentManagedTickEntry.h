#pragma once
#include "CoreMinimal.h"
#include "ComponentManagedTickEntry.generated.h"

class UActorComponent;

USTRUCT(BlueprintType)
struct FComponentManagedTickEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorComponent* ActorComponent;
    
    GUNFIRERUNTIME_API FComponentManagedTickEntry();
};

