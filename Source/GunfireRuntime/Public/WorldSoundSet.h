#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HierarchicalEditInterface.h"
#include "Templates/SubclassOf.h"
#include "WorldSoundList.h"
#include "WorldSoundSet.generated.h"

class UAudioStateID;
class UWorldSoundID;
class UWorldSoundSet;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UWorldSoundSet : public UDataAsset, public IHierarchicalEditInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWorldSoundID*> SoundIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorldSoundSet* ParentSet;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UAudioStateID>, FWorldSoundList> SoundMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWorldSoundList GlobalSoundList;
    
public:
    UWorldSoundSet();
    
    // Fix for true pure virtual functions not being implemented
};

