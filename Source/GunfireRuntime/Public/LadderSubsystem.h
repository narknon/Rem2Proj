#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "LadderSubsystem.generated.h"

class ULadderCacheComponent;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API ULadderSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ULadderCacheComponent>> Ladders;
    
public:
    ULadderSubsystem();
};

