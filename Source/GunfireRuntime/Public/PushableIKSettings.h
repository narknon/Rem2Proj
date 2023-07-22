#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PushIKAppendage.h"
#include "PushableIKSettings.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UPushableIKSettings : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPushIKAppendage> Appendages;
    
    UPushableIKSettings();
};

