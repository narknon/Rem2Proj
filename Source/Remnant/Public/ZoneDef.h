#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EncounterGroup.h"
#include "MapGenAttribute.h"
#include "TileSpawnList.h"
#include "Templates/SubclassOf.h"
#include "ZoneSkyBoxDef.h"
#include "ZoneDef.generated.h"

class UResourceDef;
class UTileSet;
class UWorld;

UCLASS(Blueprintable, Config=Game)
class UZoneDef : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> MapTemplates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTileSet* TileSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTileSpawnList> SpawnLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEncounterGroup> EncounterGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UResourceDef> Resources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZoneSkyBoxDef> SkyBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapGenAttribute> Attributes;
    
    UZoneDef();
};

