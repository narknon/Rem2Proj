#include "LoreSubsystem.h"
#include "Templates/SubclassOf.h"

void ULoreSubsystem::OnImageSetLoaded(AActor* ContextActor, FSoftObjectPath ImageSetPath) {
}

void ULoreSubsystem::OnContextActorEndPlay(AActor* ContextActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void ULoreSubsystem::InitializeLoreImageSet(AActor* LifetimeContextActor, TSubclassOf<ALoreItem> LoreClass) {
}

ULoreSubsystem* ULoreSubsystem::GetInstance(const UObject* WorldContextObject) {
    return NULL;
}

ULoreSubsystem::ULoreSubsystem() {
}

