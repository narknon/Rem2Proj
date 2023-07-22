#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "CameraModifier_SimulatedHMD.generated.h"

class UInputComponent;

UCLASS(Blueprintable, Config=Camera)
class GUNFIRERUNTIME_API UCameraModifier_SimulatedHMD : public UCameraModifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* InputComponent;
    
public:
    UCameraModifier_SimulatedHMD();
};

