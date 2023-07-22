#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DamageInfo.h"
#include "EIntensityState.h"
#include "EncounterGroup.h"
#include "EncounterGroupEventDelegate.h"
#include "EncounterGroupNamedEventDelegate.h"
#include "EncounterGroupSpawnEventDelegate.h"
#include "AIDirector.generated.h"

class AActor;
class UEncounterGroupInstance;
class UEncounterInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UAIDirector : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterGroupEvent OnGroupAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterGroupEvent OnGroupRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterGroupEvent OnGroupEncounterComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterGroupSpawnEvent OnGroupActorSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterGroupSpawnEvent OnGroupActorDead;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterGroupNamedEvent OnGroupEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Suspended;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEncounterGroupInstance*> EncounterGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EIntensityState IntensityState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IntensityStateChangeLockout;
    
public:
    UAIDirector();
    UFUNCTION(BlueprintCallable)
    void Suspend();
    
    UFUNCTION(BlueprintCallable)
    void StopEncounterGroup(UEncounterGroupInstance* EncounterGroup, bool DestroyActiveSpawns);
    
    UFUNCTION(BlueprintCallable)
    UEncounterGroupInstance* StartEncounterGroup(const FEncounterGroup& Group);
    
    UFUNCTION(BlueprintCallable)
    void Resume();
    
    UFUNCTION(BlueprintCallable)
    void ResetIntensity();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnNotifyHit(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnEncounterEvent(UEncounterInstance* Encounter, FName EventName);
    
    UFUNCTION(BlueprintCallable)
    void OnActorSpawned(UEncounterInstance* Encounter, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorDead(UEncounterInstance* Encounter, AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable)
    bool HasActiveSpawns();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIntensity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAIDirectorDebugState();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllGroups(bool DestroyActiveSpawns);
    
};

