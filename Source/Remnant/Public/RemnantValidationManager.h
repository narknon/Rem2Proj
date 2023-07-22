#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "QueuedExceptionInfo.h"
#include "RemnantValidationManager.generated.h"

class AActor;
class AItem;
class UObject;
class URemnantValidationManager;
class UTrait;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REMNANT_API URemnantValidationManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FQueuedExceptionInfo> QueuedExceptions;
    
    URemnantValidationManager();
    UFUNCTION(BlueprintCallable)
    void QueueSoftTraitException(TSoftClassPtr<UTrait> SoftTraitBP, int32 LevelChange, bool bIsRemovingTrait);
    
    UFUNCTION(BlueprintCallable)
    void QueueSoftItemException(TSoftClassPtr<AItem> SoftItemBP, int32 QuantityChange, int32 LevelChange);
    
    UFUNCTION(BlueprintCallable)
    void QueueProgressionException(int32 LevelChange, int32 ExperienceChange);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URemnantValidationManager* GetInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool CanDoCheatValidation(AActor* ValidatedActor);
    
};

