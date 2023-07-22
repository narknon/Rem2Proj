#pragma once
#include "CoreMinimal.h"
#include "ClimbableSurfaceResult.h"
#include "SplineCameraVolume.h"
#include "ClimbingCameraVolume.generated.h"

class UClimbingComponent;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API AClimbingCameraVolume : public ASplineCameraVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoDeactivateOnDismount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCenterCameraOnDismount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CenterCameraRequiredTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CenterPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CenterPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CenterPitchYawArc;
    
public:
    AClimbingCameraVolume();
protected:
    UFUNCTION(BlueprintCallable)
    void OnClimbSurfaceChanged(UClimbingComponent* ClimbingComponent, const FClimbableSurfaceResult& NewSurface, const FClimbableSurfaceResult& PreviousSurface);
    
};

