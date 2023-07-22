#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequencePlaybackSettings.h"
#include "CinematicPlayerSettings.h"
#include "EventTreeNode_Branch.h"
#include "EventTreeNode_Cinematic_Base.generated.h"

class AActor;
class UCinematicInstance_Base;
class UEventTreeComponent;
class UObject;

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API UEventTreeNode_Cinematic_Base : public UEventTreeNode_Branch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CinematicTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideOtherPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetNonMVPs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetCameraOnComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowSkipCinematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DefaultToPlayerCameraOnFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseLocalAreaRelevance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnlyShowCameraToInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VariableToSetOnSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEventTreeComponent* StoredComponent;
    
    UEventTreeNode_Cinematic_Base();
    UFUNCTION(BlueprintCallable)
    void OnSequenceTriggerForEventTree(FName TriggerName);
    
    UFUNCTION(BlueprintCallable)
    void OnClientSequencerFinishedCinematic(FCinematicPlayerSettings Settings, UObject* CurrentCinematic, AActor* Instigator);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCinematicSkipVoteEvent(UObject* CinematicAsset, bool Skipped);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCinematicFinishedCallback(UCinematicInstance_Base* CinematicInstance);
    
};

