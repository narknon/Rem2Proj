#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "LoreImageSetData.h"
#include "OnLoreImageSetLoadedDelegate.h"
#include "Templates/SubclassOf.h"
#include "LoreSubsystem.generated.h"

class AActor;
class ALoreItem;
class ULoreSubsystem;
class UObject;

UCLASS(Blueprintable)
class REMNANT_API ULoreSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoreImageSetLoaded OnLoreImageSetLoaded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLoreImageSetData> ImageSetRefs;
    
public:
    ULoreSubsystem();
protected:
    UFUNCTION(BlueprintCallable)
    void OnImageSetLoaded(AActor* ContextActor, FSoftObjectPath ImageSetPath);
    
    UFUNCTION(BlueprintCallable)
    void OnContextActorEndPlay(AActor* ContextActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeLoreImageSet(AActor* LifetimeContextActor, TSubclassOf<ALoreItem> LoreClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ULoreSubsystem* GetInstance(const UObject* WorldContextObject);
    
};

