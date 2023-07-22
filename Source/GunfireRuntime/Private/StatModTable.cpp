#include "StatModTable.h"
#include "Templates/SubclassOf.h"

bool UStatModTable::IsModifierValidForContext(AActor* SourceActor, UDataTable* Table, int32 ModifierLevel, TSubclassOf<UActorModifier> ModifierBP, UObject* TableContextObject, bool UnequippedIsValid) {
    return false;
}

bool UStatModTable::HasModifier(UDataTable* Table, TSubclassOf<UActorModifier> ModifierBP) {
    return false;
}

void UStatModTable::GetModifiers(AActor* SourceActor, UDataTable* Table, int32 FromLevel, int32 ToLevel, TArray<FInspectInfo>& OutInspectInfo) {
}

UStatModTable::UStatModTable() {
}

