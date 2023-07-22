#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "CharacterManager.generated.h"

class AActor;
class ACharacterGunfire;
class UActorTickManager;
class UCharacterManager;
class UObject;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UCharacterManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActorTickManager* TickManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ACharacterGunfire*> Characters;
    
public:
    UCharacterManager();
    UFUNCTION(BlueprintCallable)
    void KillAllCharactersForOwner(AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    bool IsCharacterTargeted(AActor* Target);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UCharacterManager* GetInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    TArray<ACharacterGunfire*> GetCharactersTargetingActor(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    TArray<ACharacterGunfire*> GetCharactersOnBaseComponent(UPrimitiveComponent* Base);
    
    UFUNCTION(BlueprintCallable)
    TArray<ACharacterGunfire*> GetCharactersOnBaseActor(AActor* Base);
    
    UFUNCTION(BlueprintCallable)
    TArray<ACharacterGunfire*> GetCharactersInAggroGroup(FName AggroGroup);
    
    UFUNCTION(BlueprintCallable)
    TArray<ACharacterGunfire*> GetCharactersForOwner(AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    void DestroyAllCharactersForOwner(AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    void ActivateCharactersOnSegment(const FVector& From, const FVector& To, bool bBonesOnly);
    
    UFUNCTION(BlueprintCallable)
    void ActivateCharactersInSphere(const FVector& Origin, float Radius, bool bBonesOnly);
    
};

