#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EZoneLinkStatus.h"
#include "EZoneLinkType.h"
#include "ZoneLinkActivateEventDelegate.h"
#include "ZoneLinkInfo.h"
#include "ZoneLinkPlayerSpawnEventDelegate.h"
#include "ZoneVoidDelegateDelegate.h"
#include "ZoneLinkComponent.generated.h"

class ASpawnPoint;
class AZoneActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REMNANT_API UZoneLinkComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NameID, meta=(AllowPrivateAccess=true))
    FName NameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EZoneLinkStatus Status;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZoneVoidDelegate OnInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoRegister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZoneLinkType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZoneLinkActivateEvent OnBecomeRespawnZoneLink;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZoneLinkActivateEvent OnActivatedZoneLink;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZoneLinkActivateEvent OnClearRespawnZoneLink;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZoneLinkPlayerSpawnEvent OnPlayerSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredPlayerProximity;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsRespawnZoneLink, meta=(AllowPrivateAccess=true))
    bool bIsRespawnZoneLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasWaypointAccess;
    
public:
    UZoneLinkComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TravelToWaypoint(const FName& LinkNameID);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TravelToDestinationZone(bool Force, bool Instant);
    
    UFUNCTION(BlueprintCallable)
    void SetLinkDisabled(bool Disabled);
    
    UFUNCTION(BlueprintCallable)
    void OnZoneLoaded(AZoneActor* NewZone);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NameID();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsRespawnZoneLink();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaypoint() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsRespawnZoneLink() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLinkDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLinkActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDestinationZoneLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenUsed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EZoneLinkType GetType() const;
    
    UFUNCTION(BlueprintCallable)
    ASpawnPoint* GetSpawnPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FZoneLinkInfo GetLinkInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AZoneActor* GetDestinationZone();
    
    UFUNCTION(BlueprintCallable)
    TArray<FZoneLinkInfo> GetAccessibleWaypoints();
    
    UFUNCTION(BlueprintCallable)
    void ActivateLink();
    
};

