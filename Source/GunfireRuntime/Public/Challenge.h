#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EChallengeScope.h"
#include "HierarchicalEditInterface.h"
#include "Challenge.generated.h"

class UChallengeRank;
class UChallengeReward;
class UTexture2D;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UChallenge : public UObject, public IHierarchicalEditInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChallengeScope Scope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Locked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VisibleByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UChallengeRank*> ChallengeRanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UChallengeReward*> Rewards;
    
    UChallenge();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalRanks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UChallengeRank* GetRank(int32 RankId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPoints(int32 MaxRank) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

