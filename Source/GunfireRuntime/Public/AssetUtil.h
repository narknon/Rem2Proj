#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AssetUtil.generated.h"

class AActor;
class UActorComponent;
class ULevelStreaming;
class UWorld;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UAssetUtil : public UObject {
    GENERATED_BODY()
public:
    UAssetUtil();
    UFUNCTION(BlueprintCallable)
    static UObject* LoadSoftReference(const TSoftObjectPtr<UObject>& SoftObjRef);
    
    UFUNCTION(BlueprintCallable)
    static UClass* LoadSoftClassReference(const TSoftClassPtr<UObject>& SoftClsRef);
    
    UFUNCTION(BlueprintCallable)
    static UObject* LoadObjectFromPath(FName Path);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsChildOfSoftClasses(AActor* Actor, const TArray<TSoftClassPtr<AActor>>& Classes);
    
    UFUNCTION(BlueprintCallable)
    static bool GetObjectPath(UObject* Object, FString& Path);
    
    UFUNCTION(BlueprintCallable)
    static FString GetCleanLevelStreamingName(const UWorld* World, const ULevelStreaming* Level, bool AppendBaseName);
    
    UFUNCTION(BlueprintCallable)
    static FString GetCleanLevelPackageName(const UWorld* World, const FString& LevelPackagePath, bool AppendBaseName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetAssetFromComponent(const UActorComponent* Component);
    
};

