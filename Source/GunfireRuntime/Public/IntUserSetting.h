#pragma once
#include "CoreMinimal.h"
#include "UserSetting.h"
#include "IntUserSetting.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UIntUserSetting : public UUserSetting {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultValue;
    
public:
    UIntUserSetting();
    UFUNCTION(BlueprintCallable)
    void SetValue(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetValue();
    
};

