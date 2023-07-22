#pragma once
#include "CoreMinimal.h"
#include "ChildAttachmentBroadcasterDelegateDelegate.generated.h"

class AActor;
class USceneComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChildAttachmentBroadcasterDelegate, AActor*, Actor, USceneComponent*, ChildComponent);

