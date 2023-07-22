#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GunfireHardwareCursor.generated.h"

class UGameViewportClientGunfire;

UCLASS(Blueprintable, Transient)
class GUNFIRERUNTIME_API UGunfireHardwareCursor : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameViewportClientGunfire* CachedViewport;
    
public:
    UGunfireHardwareCursor();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateHardwareCursorOnDeviceChange();
    
};

