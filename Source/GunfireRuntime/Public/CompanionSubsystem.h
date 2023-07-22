#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "CompanionDelegateDelegate.h"
#include "CompanionEventDelegate.h"
#include "CompanionSubsystem.generated.h"

class ACharacterGunfire;
class UCompanionComponent;
class UObject;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UCompanionSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCompanionComponent*> Companions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompanionEvent OnCompanionsChanged;
    
public:
    UCompanionSubsystem();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveCompanionListener(const UObject* WorldContextObject, const FCompanionDelegate& Event);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<ACharacterGunfire*> GetCompanions(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddCompanionListener(const UObject* WorldContextObject, const FCompanionDelegate& Event);
    
};

