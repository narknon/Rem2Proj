#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SoftDestroyEventDelegate.h"
#include "FxActorDestroyerComponent.generated.h"

class AActor;
class UFxActorDestroyerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UFxActorDestroyerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftDestroyEvent OnSoftDestroyed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IgnoredComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceDestroyTimer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> ActiveComponents;
    
public:
    UFxActorDestroyerComponent();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SoftDestroyOwner();
    
    UFUNCTION(BlueprintCallable)
    static UFxActorDestroyerComponent* SoftDestroyActor(AActor* Actor, const TArray<FName>& InIgnoredComponents, float InForceDestroyTimer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSoftDestroying() const;
    
};

