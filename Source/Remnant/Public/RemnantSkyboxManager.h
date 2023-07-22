#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "OnSkyboxManagerInitDelegate.h"
#include "SkyboxModifierVolumeInfo.h"
#include "RemnantSkyboxManager.generated.h"

class AActor;
class UObject;
class UPrimitiveComponent;
class URemnantSkyboxManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REMNANT_API URemnantSkyboxManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSkyboxModifierVolumeInfo> ModifierVolumes;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSkyboxManagerInit OnSkyboxManagerInit;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SkyboxRefActor;
    
public:
    URemnantSkyboxManager();
    UFUNCTION(BlueprintCallable)
    void RegisterSkyboxModifierVolume(AActor* SkyboxModVolume);
    
    UFUNCTION(BlueprintCallable)
    void RefreshModifierVolumes();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerExitVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEnterVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsPlayerInAnyModifierVolumes(AActor* Player, AActor* ExcludedVolume);
    
    UFUNCTION(BlueprintCallable)
    void InitSkyboxManager(AActor* SkyboxActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URemnantSkyboxManager* GetInstance(const UObject* WorldContextObject);
    
};

