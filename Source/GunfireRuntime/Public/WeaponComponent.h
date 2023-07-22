#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DamageInfo.h"
#include "InspectInfo.h"
#include "WeaponComponent.generated.h"

class AActor;
class UStatsComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UWeaponComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UWeaponComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyHitTarget(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void ModifyInspectInfo(AActor* Actor, const FInspectInfo& In, FInspectInfo& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ModifyDamage(UPARAM(Ref) FDamageInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ComputeStats(UStatsComponent* Stats);
    
};

