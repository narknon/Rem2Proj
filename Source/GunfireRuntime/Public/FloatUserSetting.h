#pragma once
#include "CoreMinimal.h"
#include "UserSetting.h"
#include "FloatUserSetting.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UFloatUserSetting : public UUserSetting {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Increment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowAsPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumDecimals;
    
public:
    UFloatUserSetting();
    UFUNCTION(BlueprintCallable)
    void SetValue(float Value);
    
    UFUNCTION(BlueprintCallable)
    float IncrementValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNormalizedValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIncrement() const;
    
    UFUNCTION(BlueprintCallable)
    float DecrementValue();
    
};

