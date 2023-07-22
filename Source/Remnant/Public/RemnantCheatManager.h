#pragma once
#include "CoreMinimal.h"
#include "CheatManagerGunfire.h"
#include "RemnantCheatManager.generated.h"

class UObject;

UCLASS(Blueprintable)
class REMNANT_API URemnantCheatManager : public UCheatManagerGunfire {
    GENERATED_BODY()
public:
    URemnantCheatManager();
private:
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllWaypoints();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllEmotes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TravelToQuest(const FString& QuestName, const FString& ComponentName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleMinimap();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleFogOfWar();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnDebugQuest(const FString& NameOfBP, const FString& StartPoint);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetQuestState(const FString& NameOfQuest, int32 QuestState, int32 QuestOutcome);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDifficulty(int32 Difficulty);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetArchetype(const FString& NameOfBP, int32 ArchetypeLevel, int32 GearLevel, int32 Slot);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RaiseDifficulty();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LowerDifficulty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSettingArchetypeFromCheat(const UObject* WorldContextObject);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAccountAward(const FString& NameOfBP);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddScrap(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddExperience(int32 Amount);
    
};

