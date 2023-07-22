#pragma once
#include "CoreMinimal.h"
#include "EInputDevice.h"
#include "UIActor.h"
#include "ECursorOverrideState.h"
#include "EDialogTravelLock.h"
#include "RemnantUIActor.generated.h"

UCLASS(Blueprintable)
class REMNANT_API ARemnantUIActor : public AUIActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDialogTravelLock TravelLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowedDuringTravel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableControllerCursor;
    
    ARemnantUIActor();
    UFUNCTION(BlueprintCallable)
    void SetCursorStateOnInstance(ECursorOverrideState CursorActiveState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DeviceChangedCallback(int32 ControllerId, EInputDevice CurrentInputDevice, EInputDevice NewInputDevice);
    
};

