#pragma once
#include "CoreMinimal.h"
#include "UserSetting_Base.h"
#include "UserSettingCategory.generated.h"

class UUserSetting;

UCLASS(Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UUserSettingCategory : public UUserSetting_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserSetting*> Children;
    
    UUserSettingCategory();
};

