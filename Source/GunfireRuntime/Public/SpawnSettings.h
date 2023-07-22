#pragma once
#include "CoreMinimal.h"
#include "EBoidSpawnStyle.h"
#include "Templates/SubclassOf.h"
#include "SpawnSettings.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSpawnSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> BoidBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Tags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 NumberOfBoids;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 RandomNumberOfBoids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBoidSpawnStyle SpawnStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RandomizeDirection;
    
    GUNFIRERUNTIME_API FSpawnSettings();
};

