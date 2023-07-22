#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "ReplicatedHit.h"
#include "ReplicatedLocation.h"
#include "ReplicatedTrace.h"
#include "ReplicatedHitUtil.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UReplicatedHitUtil : public UObject {
    GENERATED_BODY()
public:
    UReplicatedHitUtil();
    UFUNCTION(BlueprintCallable)
    static FReplicatedTrace MakeReplicatedTraceFromHit(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    static FReplicatedLocation MakeReplicatedLocationFromHit(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FReplicatedLocation MakeReplicatedLocation(UPrimitiveComponent* Component, FName BoneName, const FVector& WorldLocation);
    
    UFUNCTION(BlueprintCallable)
    static FReplicatedHit MakeReplicatedHitFromHit(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    static bool GetHitFromReplicatedTrace(const FReplicatedTrace& ReplicatedTrace, const FVector& From, FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    static bool GetHitFromReplicatedHit(const FReplicatedHit& ReplicatedHit, FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakReplicatedLocation(const FReplicatedLocation& Location, UPrimitiveComponent*& Component, FName& BoneName, FVector& WorldLocation);
    
};

