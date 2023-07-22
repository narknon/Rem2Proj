#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HierarchicalEditInterface.h"
#include "WorldSound.h"
#include "WorldSoundEntry.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UWorldSoundEntry : public UObject, public IHierarchicalEditInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldSound Sound;
    
    UWorldSoundEntry();
    
    // Fix for true pure virtual functions not being implemented
};

