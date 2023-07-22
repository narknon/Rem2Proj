#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ELookTargetType.h"
#include "ETrackingMode.h"
#include "LookTarget.h"
#include "NPCHeadTrackingComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UNPCHeadTrackingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrackingMode TrackingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReferenceNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNodeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> NoTrackAnimTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsiderCharacterTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharacterTargetPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreViewpointYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreViewpointPitch;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLookTarget> Targets;
    
public:
    UNPCHeadTrackingComponent();
    UFUNCTION(BlueprintCallable)
    void SetTrackingMode(ETrackingMode NewMode);
    
    UFUNCTION(BlueprintCallable)
    void ResetLookTargets();
    
    UFUNCTION(BlueprintCallable)
    void ResetLookRotation();
    
    UFUNCTION(BlueprintCallable)
    void RemoveLookTarget(AActor* LookTarget);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveActorLookTarget(AActor* Actor, AActor* LookTarget);
    
    UFUNCTION(BlueprintCallable)
    void AddLookTarget(AActor* LookTarget, int32 Priority, FName Node, ELookTargetType Type);
    
    UFUNCTION(BlueprintCallable)
    static void AddActorLookTarget(AActor* Actor, AActor* LookTarget, int32 Priority, FName Node, ELookTargetType Type);
    
};

