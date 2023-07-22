#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HierarchicalEditInterface.h"
#include "PlayStateSet.generated.h"

class UPlayState;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UPlayStateSet : public UDataAsset, public IHierarchicalEditInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPlayState*> States;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultState;
    
    UPlayStateSet();
    
    // Fix for true pure virtual functions not being implemented
};

