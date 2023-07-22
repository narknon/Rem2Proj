#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "AIPointOfInterestManager.generated.h"

class AAIPointOfInterest;
class AActor;
class UAIPOIType;
class UAIPointOfInterestManager;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UAIPointOfInterestManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAIPointOfInterest*> PointsOfInterest;
    
public:
    UAIPointOfInterestManager();
    UFUNCTION(BlueprintCallable)
    bool HasPointsInNavRange(AActor* Actor, const FVector& SourceLocation, float NavRange, float SnapDistance, TSubclassOf<UAIPOIType> POIType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPointsSweep(AActor* Source, const FVector& Start, const FVector& End, float Radius, TSubclassOf<UAIPOIType> POIType, TArray<AAIPointOfInterest*>& POIs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPointsInNavRange(AActor* Actor, const FVector& SourceLocation, float NavRange, float SnapDistance, TSubclassOf<UAIPOIType> POIType, TArray<AAIPointOfInterest*>& POIs) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAIPointOfInterestManager* GetInstance(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void EnablePointsOfInterestInGroup(FName GroupName, bool DeactivateOtherGroups);
    
};

