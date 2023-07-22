#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HierarchicalEditInterface.h"
#include "Templates/SubclassOf.h"
#include "WorldSoundID.generated.h"

class UAudioStateID;
class UWorldSoundEntry;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UWorldSoundID : public UObject, public IHierarchicalEditInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UAudioStateID>> States;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWorldSoundEntry*> Entries;
    
    UWorldSoundID();
    
    // Fix for true pure virtual functions not being implemented
};

