#pragma once
#include "CoreMinimal.h"
#include "CharacterGunfire.h"
#include "PlayerGunfire.generated.h"

class UInputStateComponent;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API APlayerGunfire : public ACharacterGunfire {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputStateComponent* InputStateComponent;
    
    APlayerGunfire();
    UFUNCTION(BlueprintCallable)
    bool IsPlayerTargeted();
    
};

