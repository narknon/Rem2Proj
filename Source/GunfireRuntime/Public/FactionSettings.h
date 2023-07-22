#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FactionAffiliation.h"
#include "Templates/SubclassOf.h"
#include "FactionSettings.generated.h"

class UFaction;

UCLASS(Blueprintable, Config=Engine, DefaultConfig)
class GUNFIRERUNTIME_API UFactionSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFaction> PlayerFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FFactionAffiliation> Affiliatons;
    
    UFactionSettings();
};

