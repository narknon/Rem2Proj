#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ManagedActor.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API AManagedActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableAnimOptimizations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableAnimSignificanceOptimizations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimSignificanceScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SuspendClothWhenNotVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableTickRateOptimizations;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> SkeletalMeshes;
    
public:
    AManagedActor();
    UFUNCTION(BlueprintCallable)
    FString GetDebugInfo(int32 DebugLevel);
    
};

