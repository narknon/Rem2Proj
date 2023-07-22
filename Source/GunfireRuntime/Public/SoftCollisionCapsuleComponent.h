#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "SoftCollisionCapsuleComponent.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API USoftCollisionCapsuleComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoftCharacterCollisionWeight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IgnoreActors;
    
public:
    USoftCollisionCapsuleComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldIgnoreActor(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable)
    void SetShouldIgnoreActor(AActor* Actor, bool bShouldIgnore);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
};

