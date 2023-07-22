#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "XRUtil.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UXRUtil : public UObject {
    GENERATED_BODY()
public:
    UXRUtil();
    UFUNCTION(BlueprintCallable)
    static bool IsStereoEnabled();
    
    UFUNCTION(BlueprintCallable)
    static bool IsHMDWorn();
    
    UFUNCTION(BlueprintCallable)
    static void EnableStereo(bool bEnable);
    
};

