#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttachedChild.h"
#include "ChildAttachmentBroadcasterDelegateDelegate.h"
#include "ChildAttachmentBroadcaster.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UChildAttachmentBroadcaster : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChildAttachmentBroadcasterDelegate OnChildAttachedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChildAttachmentBroadcasterDelegate OnChildDetachedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAttachedChild> AttachedChildren;
    
public:
    UChildAttachmentBroadcaster();
};

