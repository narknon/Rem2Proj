#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InspectInfo.h"
#include "Templates/SubclassOf.h"
#include "StatModTable.generated.h"

class AActor;
class UActorModifier;
class UDataTable;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UStatModTable : public UObject {
    GENERATED_BODY()
public:
    UStatModTable();
    UFUNCTION(BlueprintCallable)
    static bool IsModifierValidForContext(AActor* SourceActor, UDataTable* Table, int32 ModifierLevel, TSubclassOf<UActorModifier> ModifierBP, UObject* TableContextObject, bool UnequippedIsValid);
    
    UFUNCTION(BlueprintCallable)
    static bool HasModifier(UDataTable* Table, TSubclassOf<UActorModifier> ModifierBP);
    
    UFUNCTION(BlueprintCallable)
    static void GetModifiers(AActor* SourceActor, UDataTable* Table, int32 FromLevel, int32 ToLevel, TArray<FInspectInfo>& OutInspectInfo);
    
};

