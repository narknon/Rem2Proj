#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "SoftCollisionBoxComponent.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API USoftCollisionBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoftCharacterCollisionWeight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IgnoreActors;
    
public:
    USoftCollisionBoxComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldIgnoreActor(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable)
    void SetShouldIgnoreActor(AActor* Actor, bool bShouldIgnore);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bIsEnabled);
    
};

