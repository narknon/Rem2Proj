#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "DialogCameraShotInfo.h"
#include "EventTreeStage.h"
#include "DialogStage.generated.h"

class APlayerController;
class UCameraComponent;
class UCinematicInstance_Base;
class UDialogComponent;
class USequencerShotGroup;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API ADialogStage : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDialogComponent* DialogComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StageActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCinematicInstance_Base*> RunningCinematicInstances;
    
public:
    ADialogStage();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupStage(const FEventTreeStage& Stage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCameraByName(FName Name, APlayerController* TargetController);
    
    UFUNCTION(BlueprintCallable)
    void SetCamera(AActor* CameraActor, APlayerController* TargetController);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveCameraComponent(AActor* Actor, UCameraComponent* Camera, APlayerController* TargetController);
    
    UFUNCTION(BlueprintCallable)
    void RestoreCamera(bool ResetToCurrentView, APlayerController* TargetController);
    
    UFUNCTION(BlueprintCallable)
    void PositionActorAtMark(AActor* Actor, FName Mark);
    
    UFUNCTION(BlueprintCallable)
    void PositionActor(AActor* Actor, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    bool PlaySequencerEntry(USequencerShotGroup* SequenceGroup);
    
    UFUNCTION(BlueprintCallable)
    void OnCinematicInstancesFinished(UCinematicInstance_Base* Instance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActor(FName Name);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void End();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DetermineCameraShotDetails(UPARAM(Ref) FEventTreeStage& Stage, FName ShotName, UPARAM(Ref) FDialogCameraShotInfo& OutInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Begin();
    
};

