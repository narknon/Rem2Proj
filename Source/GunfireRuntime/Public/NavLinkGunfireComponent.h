#pragma once
#include "CoreMinimal.h"
#include "NavLinkCustomComponent.h"
#include "Templates/SubclassOf.h"
#include "NavLinkGunfireComponent.generated.h"

class AActor;
class UNavArea;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UNavLinkGunfireComponent : public UNavLinkCustomComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* EndpointActor;
    
public:
    UNavLinkGunfireComponent();
    UFUNCTION(BlueprintCallable)
    void SetLinkEnabledArea(TSubclassOf<UNavArea> AreaClass);
    
    UFUNCTION(BlueprintCallable)
    void SetLinkEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetLinkDisableArea(TSubclassOf<UNavArea> AreaClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLinkEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UNavArea> GetLinkEnabledArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UNavArea> GetLinkDisabledArea() const;
    
};

