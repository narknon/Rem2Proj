#pragma once
#include "CoreMinimal.h"
#include "ComponentManagedTickEntry.h"
#include "ActorManagedTickEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorManagedTickEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ChildActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentManagedTickEntry> PrePhysicsTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentManagedTickEntry> DuringPhysicsTick;
    
    GUNFIRERUNTIME_API FActorManagedTickEntry();
};

