#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ActorManagedTickEntry.h"
#include "ActorTickManager.generated.h"

class AActor;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UActorTickManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Actors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorManagedTickEntry> NewTickActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorManagedTickEntry> TickActors;
    
public:
    UActorTickManager();
};

