#pragma once
#include "CoreMinimal.h"
#include "EnumCVDUserSettingEntry.h"
#include "IntUserSetting.h"
#include "ColorblindUserSetting.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UColorblindUserSetting : public UIntUserSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnumCVDUserSettingEntry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWraps;
    
    UColorblindUserSetting();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValueEnumCVD(FEnumCVDUserSettingEntry& OutEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumEntries() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextEntry(int32 CurrentValue, FEnumCVDUserSettingEntry& OutNext, bool bForwards);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnumCVDEntryByIndex(int32 Index, FEnumCVDUserSettingEntry& OutEntry);
    
};

