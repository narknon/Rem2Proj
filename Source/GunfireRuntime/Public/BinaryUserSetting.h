#pragma once
#include "CoreMinimal.h"
#include "UserSetting.h"
#include "BinaryUserSetting.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UBinaryUserSetting : public UUserSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OffLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OnLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertConsoleVariable;
    
    UBinaryUserSetting();
    UFUNCTION(BlueprintCallable)
    void SetValue(bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValue();
    
};

