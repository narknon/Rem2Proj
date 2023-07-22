#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HierarchicalEditInterface.h"
#include "ChallengeList.generated.h"

class UChallenge;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UChallengeList : public UObject, public IHierarchicalEditInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UChallenge*> Challenges;
    
    UChallengeList();
    
    // Fix for true pure virtual functions not being implemented
};

