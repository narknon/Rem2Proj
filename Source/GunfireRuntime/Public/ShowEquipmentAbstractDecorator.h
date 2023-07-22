#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "Conditions.h"
#include "ShowEquipmentAbstractDecorator.generated.h"

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API UShowEquipmentAbstractDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SetOnEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SetOnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RestoreOnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConditions Conditions;
    
public:
    UShowEquipmentAbstractDecorator();
};

