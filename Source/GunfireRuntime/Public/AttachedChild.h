#pragma once
#include "CoreMinimal.h"
#include "AttachedChild.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FAttachedChild {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TickAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastTickUpdated;
    
    FAttachedChild();
};

