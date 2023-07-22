#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "TileResources.h"
#include "ResourceSpawnManager.generated.h"

class UResourceDef;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UResourceSpawnManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSubclassOf<UResourceDef> ResourceDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool Generated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FTileResources> Resources;
    
public:
    UResourceSpawnManager();
protected:
    UFUNCTION(BlueprintCallable)
    void OnUninitialize();
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnListLoaded(int32 TileID);
    
    UFUNCTION(BlueprintCallable)
    void OnSetTileActive(int32 TileID, bool Active);
    
    UFUNCTION(BlueprintCallable)
    void OnGenerateResources();
    
};

