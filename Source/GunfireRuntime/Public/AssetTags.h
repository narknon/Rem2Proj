#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "AssetTags.generated.h"

class UAssetTags;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UAssetTags : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AssetTags;
    
    UAssetTags();
    UFUNCTION(BlueprintCallable)
    static bool SetAssetTag(UObject* Asset, FName Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAssetTags* GetAssetTags(UObject* Asset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckAssetTags(UObject* Asset, const TArray<FName>& TagsToCheck, bool bAllOrNothing);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckAssetTag(UObject* Asset, FName Tag);
    
};

