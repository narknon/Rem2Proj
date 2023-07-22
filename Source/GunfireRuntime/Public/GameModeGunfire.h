#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "DamageEventDelegateDelegate.h"
#include "DamageInfo.h"
#include "ShutdownEventDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "GameModeGunfire.generated.h"

class AActor;
class AGameRules;
class APlayerController;
class UDamageTypeGunfire;
class UImpactDirection;
class UObject;

UCLASS(Blueprintable, NonTransient)
class GUNFIRERUNTIME_API AGameModeGunfire : public AGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageEventDelegate OnNotifyHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageEventDelegate OnNotifyDead;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShutdownEventDelegate OnGameShutdown;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGameRules> GameRulesClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> AssetReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameRules* GameRules;
    
public:
    AGameModeGunfire();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostApplyDamage(UPARAM(Ref) FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayerDied(APlayerController* Player);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDamage(AActor* CauseActor, AActor* TargetActor, float Damage, float DamageMod, float DamageScalar, TSubclassOf<UDamageTypeGunfire> DamageType, TSubclassOf<UImpactDirection> ImpactDirection);
    
};

