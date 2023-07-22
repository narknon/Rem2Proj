#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HierarchicalEditInterface.h"
#include "ItemGenRequest.h"
#include "ItemGenResult.h"
#include "ItemGenerator.generated.h"

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API UItemGenerator : public UObject, public IHierarchicalEditInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Chance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelMax;
    
    UItemGenerator();
    UFUNCTION(BlueprintCallable)
    void GenerateItems(FItemGenRequest Request, TArray<FItemGenResult>& Results);
    
    
    // Fix for true pure virtual functions not being implemented
};

