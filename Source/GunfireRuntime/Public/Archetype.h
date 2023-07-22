#pragma once
#include "CoreMinimal.h"
#include "Trait.h"
#include "Archetype.generated.h"

class AActor;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UArchetype : public UTrait {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredExperience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredExperienceInc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredExperienceExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredExperienceRound;
    
    UArchetype();
protected:
    UFUNCTION(BlueprintCallable)
    void OnExperience(int32 Experience);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ModifyIncomingExperience(UPARAM(Ref) int32& Experience);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetRequiredExperienceForLevel(AActor* Actor, int32 TargetLevel);
    
};

