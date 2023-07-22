#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DamageInfo.h"
#include "DialogInfo.h"
#include "EventTreeComponent.h"
#include "ContextualDialogComponent.generated.h"

class AActor;
class UContextualDialogSet;
class UDialogInstance;
class UEventTree;
class UEventTreeNode_ContextualDialogTrigger;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UContextualDialogComponent : public UEventTreeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UContextualDialogSet* DialogSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEventTree* DialogTree;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ClientSideDialogTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UEventTreeNode_ContextualDialogTrigger*> CachedTriggers;
    
public:
    UContextualDialogComponent();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TriggerDialogResponseInProximity(const UObject* WorldContextObject, const FVector& Location, float Radius, FName DialogResponse);
    
    UFUNCTION(BlueprintCallable)
    bool TriggerDialogResponse(FName Trigger);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTriggerDialogResponse(FName Trigger);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyTakeDamage(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyHit(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnEvent(FName EventName);
    
    UFUNCTION(BlueprintCallable)
    void OnDialogComplete(UDialogInstance* Instance);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastDialog(FDialogInfo Dialog);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetContextOwner();
    
    UFUNCTION(BlueprintCallable)
    void EventEnd();
    
};

