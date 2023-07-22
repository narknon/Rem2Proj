#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "QuestTriggerPlayerDelegateDelegate.h"
#include "QuestTrigger.generated.h"

class ARemnantCharacter;
class ATriggerVolume;

UCLASS(Blueprintable)
class REMNANT_API AQuestTrigger : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATriggerVolume* TriggerVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameID;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestTriggerPlayerDelegate OnPlayerEnter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestTriggerPlayerDelegate OnPlayerExit;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseManualCollision;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARemnantCharacter*> Characters;
    
public:
    AQuestTrigger();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerInRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATriggerVolume* GetTriggerVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ARemnantCharacter*> GetCharacters();
    
    UFUNCTION(BlueprintCallable)
    void EvaluateOverlaps();
    
};

