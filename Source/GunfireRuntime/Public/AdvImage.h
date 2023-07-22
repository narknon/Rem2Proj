#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "EInputDevice.h"
#include "AdvImage.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAdvImage : public UImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameID;
    
    UAdvImage();
    UFUNCTION(BlueprintCallable)
    void SetNameID(FName InNameID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnResetIconCache();
    
    UFUNCTION(BlueprintCallable)
    void OnDeviceChanged(int32 ControllerId, EInputDevice NewDevice);
    
};

