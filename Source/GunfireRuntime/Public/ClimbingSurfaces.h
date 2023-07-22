#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ClimbableLedge.h"
#include "ClimbingSurfaces.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API AClimbingSurfaces : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClimbableLedge> Ledges;
    
public:
    AClimbingSurfaces();
};

