#pragma once
#include "CoreMinimal.h"
#include "CVarListUserSettingEntry.h"
#include "EnumUserSettingBase.h"
#include "ConsoleVariableListUserSetting.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UConsoleVariableListUserSetting : public UEnumUserSettingBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCVarListUserSettingEntry> Entries;
    
    UConsoleVariableListUserSetting();
};

