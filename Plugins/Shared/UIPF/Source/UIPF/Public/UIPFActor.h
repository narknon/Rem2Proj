#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UIPFActor.generated.h"

class UHierarchicalInstancedStaticMeshComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable, NotPlaceable)
class UIPF_API AUIPFActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHierarchicalInstancedStaticMeshComponent* MyISM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BlockingCollisionOverideSMComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* SM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkelMesh;
    
public:
    AUIPFActor();
protected:
    UFUNCTION(BlueprintCallable)
    void TrySleep();
    
    UFUNCTION(BlueprintCallable)
    void DelayPhysEnabled();
    
};

