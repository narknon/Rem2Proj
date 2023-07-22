#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "Templates/SubclassOf.h"
#include "AimingDecorator.generated.h"

class UItemType;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAimingDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UItemType>> Types;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideEquipmentOnExit;
    
public:
    UAimingDecorator();
};

