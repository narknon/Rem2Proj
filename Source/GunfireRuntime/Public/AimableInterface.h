#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "AimableInterface.generated.h"

class AActor;
class UReticule;
class UReticulePiece;

UINTERFACE(Blueprintable, MinimalAPI)
class UAimableInterface : public UInterface {
    GENERATED_BODY()
};

class IAimableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShowReticule() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShowDisabledReticule() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldShowProjectileVisualization() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStopAiming();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartAiming();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ModifyReticuleColor(UReticule* DrawReticule, UReticulePiece* DrawPiece, FColor& InOutColor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ModifyRange(UPARAM(Ref) float& Range) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ModifyInputDragRanges(UPARAM(Ref) float& OutOptimalRange, UPARAM(Ref) float& OutTotalRange) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* ModifyAimTarget(AActor* HitActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ModifyAimAdjustRanges(UPARAM(Ref) float& OutOptimalRange, UPARAM(Ref) float& OutTotalRange) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UReticule* GetCurrentReticule() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanStopAiming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanAim() const;
    
};

