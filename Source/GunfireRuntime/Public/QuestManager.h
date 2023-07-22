#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "QuestManagerQuestDelegateDelegate.h"
#include "QuestManagerQuestObjectiveDelegateDelegate.h"
#include "QuestManagerVoidDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "QuestManager.generated.h"

class AQuest;
class UEventTreeComponent;
class ULevel;
class UObject;
class UQuestManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UQuestManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestManagerVoidDelegate OnQuestsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestManagerQuestDelegate OnQuestObjectivesUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestManagerQuestObjectiveDelegate OnQuestObjectiveUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestManagerQuestDelegate OnQuestComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AQuest*> Quests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 QuestIDGen;
    
public:
    UQuestManager();
    UFUNCTION(BlueprintCallable)
    void SetupQuestVariables(UEventTreeComponent* EventTreeComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyQuestsUpdated() const;
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool NotifyQuestByName(UObject* WorldContextObject, FName QuestNameID, FName EventName);
    
    UFUNCTION(BlueprintCallable)
    AQuest* GetQuestByType(TSubclassOf<AQuest> QuestBP, bool ActiveOnly);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UQuestManager* GetInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    TArray<AQuest*> FindQuestsInLevel(ULevel* Level);
    
    UFUNCTION(BlueprintCallable)
    AQuest* FindQuestByNameID(FName QuestNameID);
    
    UFUNCTION(BlueprintCallable)
    AQuest* FindQuestByID(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DestroyQuest(AQuest* Quest) const;
    
    UFUNCTION(BlueprintCallable)
    AQuest* CreateQuest(TSubclassOf<AQuest> QuestBP, int32 SeedOverride);
    
};

