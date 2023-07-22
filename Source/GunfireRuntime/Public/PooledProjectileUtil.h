#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PooledProjectileParams.h"
#include "PooledProjectileUtil.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UPooledProjectileUtil : public UObject {
    GENERATED_BODY()
public:
    UPooledProjectileUtil();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool InitializeProjectilePool(const UObject* WorldContextObject, UPARAM(Ref) FPooledProjectileParams& PoolParams, bool bSetInitialSizeOnly);
    
};

