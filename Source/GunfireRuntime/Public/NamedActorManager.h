#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NamedActorDelegateDelegate.h"
#include "NamedActorManager.generated.h"

class AActor;
class UNamedActorManager;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UNamedActorManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNamedActorDelegate OnActorRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNamedActorDelegate OnActorUnregistered;
    
    UNamedActorManager();
    UFUNCTION(BlueprintCallable)
    void RemoveActor(const FName& NameID, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UNamedActorManager* GetInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FindActorsByTags(const UObject* WorldContextObject, const TArray<FName>& Tags, TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* FindActorByName(const UObject* WorldContextObject, FName NameID);
    
    UFUNCTION(BlueprintCallable)
    void AddActor(const FName& NameID, AActor* Actor);
    
};

