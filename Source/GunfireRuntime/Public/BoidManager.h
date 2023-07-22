#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BoidManager.generated.h"

class UBoidComponent;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UBoidManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBoidComponent*> Boids;
    
public:
    UBoidManager();
};

