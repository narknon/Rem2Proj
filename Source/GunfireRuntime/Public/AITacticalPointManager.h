#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "AITacticalPointManager.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAITacticalPointManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UAITacticalPointManager();
};

