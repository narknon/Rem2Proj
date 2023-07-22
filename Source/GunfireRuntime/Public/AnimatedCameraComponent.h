#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "AnimatedCameraComponent.generated.h"

class APlayerController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UAnimatedCameraComponent : public UCameraComponent {
    GENERATED_BODY()
public:
    UAnimatedCameraComponent();
    UFUNCTION(BlueprintCallable)
    void SetCamera(APlayerController* TargetController);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimatedCameraFOV(float CameraFOV);
    
    UFUNCTION(BlueprintCallable)
    void RestoreCamera(APlayerController* TargetController, bool ResetToCurrentView);
    
    UFUNCTION(BlueprintCallable)
    void ExitAnimatedCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Exit();
    
    UFUNCTION(BlueprintCallable)
    void EnterAnimatedCamera(const FName& CameraBone, float CameraFOV);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Enter();
    
    UFUNCTION(BlueprintCallable)
    void AnimatedCameraCut(const FName& CameraBone, float CameraFOV);
    
};

