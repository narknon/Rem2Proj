#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DialogVoidDelegateDelegate.h"
#include "EventTreeContext.h"
#include "EventTreeStage.h"
#include "EventTreeStageEventDelegate.h"
#include "EventTreeComponent.generated.h"

class AActor;
class UEventTree;
class UEventTreeNode;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UEventTreeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogVoidDelegate OnBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogVoidDelegate OnEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventTreeStageEvent OnSetStage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEventTreeContext> ExecutionStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEventTreeStage> StageStack;
    
public:
    UEventTreeComponent();
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void StartTree();
    
    UFUNCTION(BlueprintCallable)
    void SetStage(const FEventTreeStage& Stage);
    
    UFUNCTION(BlueprintCallable)
    void SetContextActor(FName Name, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void PushStage(const FEventTreeStage& Stage);
    
    UFUNCTION(BlueprintCallable)
    void PopStage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEventTreeNode* K2_PeekNextNode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEventTreeNode* K2_GetCurrentNode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingEvents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetContextActors(FName Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetContextActor(FName Name) const;
    
    UFUNCTION(BlueprintCallable)
    bool ExecuteTriggerFromEventTree(UEventTree* EventTree, const FName& TriggerName);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteSubroutine(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void Clear(bool ForceComplete);
    
    UFUNCTION(BlueprintCallable)
    void BeginEventTree(UEventTree* EventTree, bool DeferredStart);
    
};

