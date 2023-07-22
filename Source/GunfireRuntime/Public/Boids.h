#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnSettings.h"
#include "Boids.generated.h"

class UBillboardComponent;
class USceneComponent;
class UWorld;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API ABoids : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnSettings SpawnSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Boids;
    
public:
    ABoids();
    UFUNCTION(BlueprintCallable)
    AActor* SpawnBoid();
    
    UFUNCTION(BlueprintCallable)
    void SetGoal(AActor* Goal);
    
    UFUNCTION(BlueprintCallable)
    void InitializeBoids();
    
    UFUNCTION(BlueprintCallable)
    void DestroyAllBoids();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BoidSpawned(AActor* Actor);
    
};

