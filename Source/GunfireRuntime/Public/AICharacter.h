#pragma once
#include "CoreMinimal.h"
#include "ChallengeTagInterface.h"
#include "CharacterGunfire.h"
#include "Templates/SubclassOf.h"
#include "AICharacter.generated.h"

class AAIPathPoint;
class UBlackboardData;
class UCombatClass;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API AAICharacter : public ACharacterGunfire, public IChallengeTagInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlackboardData* Blackboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIPathPoint* SpawnPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIPathPoint* PatrolPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerceptionScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCombatClass> CombatClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NoDamageWhenNotPlayerVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoDamageWhenNotPlayerDamageScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoDamageWhenNotPlayerVisibleMaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName POITag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentPOIAnimTags, meta=(AllowPrivateAccess=true))
    TArray<FName> CurrentPOIAnimationTags;
    
    AAICharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentPOIAnimTags();
    
    UFUNCTION(BlueprintCallable)
    void DifficultyChanged();
    
    
    // Fix for true pure virtual functions not being implemented
};

