#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InteractableActorReference.h"
#include "Templates/SubclassOf.h"
#include "InteractableUtil.generated.h"

class AActor;
class UInteractableStateBase;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UInteractableUtil : public UObject {
    GENERATED_BODY()
public:
    UInteractableUtil();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TriggerInteractableActors(const UObject* WorldContextObject, const TArray<FInteractableActorReference>& Interactables, TSubclassOf<UInteractableStateBase> DefaultState);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TriggerInteractableActorByName(const UObject* WorldContextObject, FName Name, TSubclassOf<UInteractableStateBase> State);
    
    UFUNCTION(BlueprintCallable)
    static void TriggerInteractableActor(AActor* Actor, TSubclassOf<UInteractableStateBase> State);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetActorsFromInteractableReference(const UObject* WorldContextObject, const FInteractableActorReference& Interactable, TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AActor* GetActorFromInteractableReference(const UObject* WorldContextObject, const FInteractableActorReference& Interactable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckTriggerState(const UInteractableStateBase* State, TSubclassOf<UInteractableStateBase> Class);
    
};

