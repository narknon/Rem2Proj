#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WeaponComponent.h"
#include "WeaponAffinityComponent.generated.h"

class UWeaponAffinities;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UWeaponAffinityComponent : public UWeaponComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWeaponAffinities> Affinities;
    
    UWeaponAffinityComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ComputeScalar();
    
};

