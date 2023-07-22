#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SplineComponent.h"
#include "OnClimbSurfaceEventDelegate.h"
#include "OnDismountSurfaceEventDelegate.h"
#include "OnGrabClimbableSurfaceEventDelegate.h"
#include "ClimbableSplineComponent.generated.h"

class ACharacterGunfire;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UClimbableSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGrabClimbableSurfaceEvent OnGrabSurface;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGrabClimbableSurfaceEvent OnReleaseSurface;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClimbSurfaceEvent OnClimb;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClimbSurfaceEvent OnLeave;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDismountSurfaceEvent OnDismount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExclusiveSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SurfaceTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ACharacterGunfire*> AttachedCharacters;
    
public:
    UClimbableSplineComponent();
    UFUNCTION(BlueprintCallable)
    void SetSurfaceTags(TArray<FName> NewSurfaceTags);
    
    UFUNCTION(BlueprintCallable)
    void SetDisabled(bool bIsDisabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoveableSurface() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExclusiveSurface() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisabled() const;
    
    UFUNCTION(BlueprintCallable)
    void DetachSplinePoint(int32 SplinePoint);
    
    UFUNCTION(BlueprintCallable)
    void DetachAllSplinePoints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSurfaceTags(const TArray<FName>& Tags, bool bAllOrNothing) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCharacterClimb(ACharacterGunfire* Character) const;
    
    UFUNCTION(BlueprintCallable)
    void AttachPointToComponent(int32 SplinePoint, USceneComponent* AttachComponent, const FTransform& RelativeTransform, FName AttachSocket, bool bMoveImmediately, bool bUpdateSpline);
    
};

