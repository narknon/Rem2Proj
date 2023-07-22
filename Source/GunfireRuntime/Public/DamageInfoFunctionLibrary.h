#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DamageInfo.h"
#include "ReplicatedDamageInfo.h"
#include "DamageInfoFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UDamageInfoFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDamageInfoFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDamageInfo Conv_RepInfoToDamageInfo(const FReplicatedDamageInfo& InRepInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FReplicatedDamageInfo Conv_DamageInfoToRepInfo(const FDamageInfo& InInfo);
    
};

