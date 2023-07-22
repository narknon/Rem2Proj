#include "InteractableUtil.h"
#include "Templates/SubclassOf.h"

void UInteractableUtil::TriggerInteractableActors(const UObject* WorldContextObject, const TArray<FInteractableActorReference>& Interactables, TSubclassOf<UInteractableStateBase> DefaultState) {
}

void UInteractableUtil::TriggerInteractableActorByName(const UObject* WorldContextObject, FName Name, TSubclassOf<UInteractableStateBase> State) {
}

void UInteractableUtil::TriggerInteractableActor(AActor* Actor, TSubclassOf<UInteractableStateBase> State) {
}

void UInteractableUtil::GetActorsFromInteractableReference(const UObject* WorldContextObject, const FInteractableActorReference& Interactable, TArray<AActor*>& Actors) {
}

AActor* UInteractableUtil::GetActorFromInteractableReference(const UObject* WorldContextObject, const FInteractableActorReference& Interactable) {
    return NULL;
}

bool UInteractableUtil::CheckTriggerState(const UInteractableStateBase* State, TSubclassOf<UInteractableStateBase> Class) {
    return false;
}

UInteractableUtil::UInteractableUtil() {
}

