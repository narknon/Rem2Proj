#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HierarchicalEditInterface.h"
#include "GameUserSettingsList.generated.h"

class UUserSetting_Base;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UGameUserSettingsList : public UObject, public IHierarchicalEditInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserSetting_Base*> Settings;
    
    UGameUserSettingsList();
    
    // Fix for true pure virtual functions not being implemented
};

