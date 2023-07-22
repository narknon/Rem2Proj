#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "Templates/SubclassOf.h"
#include "DamageStateDecorator.generated.h"

class UDamageTypeGunfire;
class UImpactDirection;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UDamageStateDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageTypeGunfire> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UImpactDirection> ImpactDirection;
    
public:
    UDamageStateDecorator();
};

