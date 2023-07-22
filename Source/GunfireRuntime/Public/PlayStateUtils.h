#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PlayStateUtils.generated.h"

class UPlayStateEffect;

UCLASS(Blueprintable)
class UPlayStateUtils : public UObject {
    GENERATED_BODY()
public:
    UPlayStateUtils();
    UFUNCTION(BlueprintCallable)
    static void RequestPlayStates(const TArray<FName>& StateNames, UObject* Context, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void RequestPlayState(const FName& NewStateName, UObject* Context, FName Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsTransitioningPlayStates(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetRequestedPlayStateName(UObject* Context, FName Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FName GetCurrentPlayStateName(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPlayStateEffect* GetActivePlayStateEffect(const UObject* WorldContextObject, UClass* Class);
    
    UFUNCTION(BlueprintCallable)
    static void ClearRequestedPlayStatesForAllReasons(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void ClearRequestedPlayState(UObject* Context, FName Reason);
    
};

