#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EQuestResult.h"
#include "EQuestState.h"
#include "QuestObjectiveDelegateDelegate.h"
#include "QuestVoidDelegateDelegate.h"
#include "QuestObjective.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UQuestObjective : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_ObjectiveData, meta=(AllowPrivateAccess=true))
    int32 CounterMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Hidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_ObjectiveData, meta=(AllowPrivateAccess=true))
    bool Pinned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_ObjectiveData, meta=(AllowPrivateAccess=true))
    EQuestState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_ObjectiveData, meta=(AllowPrivateAccess=true))
    EQuestResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_ObjectiveData, meta=(AllowPrivateAccess=true))
    uint8 Counter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ObjectiveData, meta=(AllowPrivateAccess=true))
    AActor* RefActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestVoidDelegate OnObjectiveActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestVoidDelegate OnObjectiveCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestVoidDelegate OnObjectiveReset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestVoidDelegate OnObjectiveTimerComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestObjectiveDelegate OnObjectiveUpdated;
    
    UQuestObjective();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetTimer(float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetRefActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetPinned(bool ShouldBePinned);
    
    UFUNCTION(BlueprintCallable)
    void SetCounter(int32 Current, int32 Max);
    
    UFUNCTION(BlueprintCallable)
    void ResetObjective();
    
    UFUNCTION(BlueprintCallable)
    void ResetCounter();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ObjectiveData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitializeQuest();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectiveComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectiveActive();
    
    UFUNCTION(BlueprintCallable)
    void IncrementCounter(bool AutoComplete);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNameID();
    
    UFUNCTION(BlueprintCallable)
    void CompleteObjective(EQuestResult ObjectiveResult);
    
    UFUNCTION(BlueprintCallable)
    void ClearTimer(bool bSilent);
    
    UFUNCTION(BlueprintCallable)
    void ActivateObjective(bool AutoCompleteActiveObjectives);
    
};

