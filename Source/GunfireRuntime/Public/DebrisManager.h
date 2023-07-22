#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "DebrisCullingInfo.h"
#include "DebrisManager.generated.h"

class UBreakableComponent;
class ULevel;
class UWorld;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UDebrisManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDebrisCullingInfo> ActiveBreakables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDebrisCullingInfo> ExpiredBreakables;
    
public:
    UDebrisManager();
protected:
    UFUNCTION(BlueprintCallable)
    void OnBreakingFinished(UBreakableComponent* Breakable);
    
    UFUNCTION(BlueprintCallable)
    void CleanupOnLevelExit(ULevel* Level, UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void CleanupAllDebris();
    
};

