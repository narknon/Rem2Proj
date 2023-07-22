#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputCoreTypes.h"
#include "KeyImage.h"
#include "KeyImageDatabase.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UKeyImageDatabase : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyImage> KeyImages;
    
public:
    UKeyImageDatabase();
private:
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetTexture(FKey Key, float& AngleOut);
    
};

