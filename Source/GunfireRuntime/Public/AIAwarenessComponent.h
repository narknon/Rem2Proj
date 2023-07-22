#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AwarenessEventDelegate.h"
#include "EAwarenessSignal.h"
#include "RelevantActor.h"
#include "RelevantActorEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "AIAwarenessComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UAIAwarenessComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EvaluateAwareness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SightRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LostSightRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HearingScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> RelevantActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AwarenessType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TypeToBeAwareOf;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAwarenessEvent OnAwarenessSignal;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRelevantActorEvent OnRelevantActorAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRelevantActorEvent OnRelevantActorRemoved;
    
    UAIAwarenessComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RelevantActorRemoved(const FRelevantActor& RelevantActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RelevantActorAdded(const FRelevantActor& RelevantActor);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumRelevantActors();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AwarenessSignal(EAwarenessSignal Type, AActor* Source, const FVector& Position, float Radius);
    
};

