#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "HealingTypeGunfire.generated.h"

class UActionBase;
class UHealingClass;

UCLASS(Blueprintable, Config=Game)
class GUNFIRERUNTIME_API UHealingTypeGunfire : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UHealingClass>> HealingClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Modifiable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActionBase> Action;
    
    UHealingTypeGunfire();
};

