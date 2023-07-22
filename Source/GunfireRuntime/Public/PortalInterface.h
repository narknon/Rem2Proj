#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PortalInterface.generated.h"

class AActor;
class APortal;

UINTERFACE(Blueprintable, MinimalAPI)
class UPortalInterface : public UInterface {
    GENERATED_BODY()
};

class IPortalInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldIgnoreProjectileCameraAlignment(APortal* EntryPortal, APortal* ExitPortal);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldIgnorePortalTransition(APortal* EntryPortal, APortal* ExitPortal);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldIgnoreModifyingWeaponTraces(APortal* EntryPortal, APortal* ExitPortal);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldDelayPortalExit(APortal* EntryPortal, APortal* ExitPortal);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldDelayPortalEntry(APortal* EntryPortal, APortal* ExitPortal);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTeleportBetweenPortals(APortal* EntryPortal, APortal* ExitPortal);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndTransitionBetweenPortals(APortal* EntryPortal, APortal* ExitPortal);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginTransitionBetweenPortals(APortal* EntryPortal, APortal* ExitPortal);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ModifyPortalTransition(APortal* EntryPortal, APortal* ExitPortal, float EnterTime, float ExitTime, float& FinalEnterTime, float& FinalExitTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetAttachedActorsForPortalTransition(APortal* EntryPortal, APortal* ExitPortal, TArray<AActor*>& AttachedActors);
    
};

