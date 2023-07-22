#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "QueuedSpawn.h"
#include "SpawnEntry.h"
#include "SpawnList.h"
#include "Templates/SubclassOf.h"
#include "SpawnPointManager.generated.h"

class AActor;
class ARecastNavMesh;
class ASpawnPoint;
class ULevel;
class UObject;
class USpawnPointManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API USpawnPointManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASpawnPoint*> SpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASpawnPoint*> PlayerSpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASpawnPoint*> SpawnPointDefaults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQueuedSpawn> SpawnQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARecastNavMesh* NavMesh;
    
public:
    USpawnPointManager();
    UFUNCTION(BlueprintCallable)
    void SpawnCharacter(const FSpawnEntry& Entry, AActor* Owner, const FVector& SpawnPos, bool Transient);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnActorDeferred(UObject* WorldContextObject, TSubclassOf<AActor> ActorBP, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    void Spawn(const FBox& Region, const FSpawnList& SpawnList, ULevel* OwningLevel, bool Transient, TArray<AActor*>& SpawnedActors);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USpawnPointManager* GetInstance(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool FindSpawnPointOnNavMesh(AActor* RefActor, const FVector& RefPosition, FVector& OutPosition, float RadiusMin, float RadiusMax, bool InFOV);
    
    UFUNCTION(BlueprintCallable)
    static bool FindNearbySpawnPosition(AActor* Actor, FVector& OutPosition, float RadiusMin, float RadiusMax, bool InFOVOnly);
    
    UFUNCTION(BlueprintCallable)
    static void FinalizeSpawnActor(AActor* Actor, const FTransform& Transform);
    
};

