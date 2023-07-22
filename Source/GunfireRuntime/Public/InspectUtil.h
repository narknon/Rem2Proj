#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InspectInfo.h"
#include "InspectMod.h"
#include "InspectStat.h"
#include "InspectUtil.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UInspectUtil : public UObject {
    GENERATED_BODY()
public:
    UInspectUtil();
    UFUNCTION(BlueprintCallable)
    static void SetInspectStat(UPARAM(Ref) FInspectInfo& Info, FName NameID, const FInspectStat& Stat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetInspectStatForMod(const FInspectMod& Mod, FName NameID, FInspectStat& OutStat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetInspectStat(const FInspectInfo& Info, FName NameID, FInspectStat& OutStat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetInspectMod(const FInspectInfo& Info, FName NameID, FInspectMod& OutMod);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ClearStats(UPARAM(Ref) FInspectInfo& Info);
    
};

