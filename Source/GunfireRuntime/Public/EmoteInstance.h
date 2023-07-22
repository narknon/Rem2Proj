#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EmoteInstance.generated.h"

class AActor;
class UActorComponent;
class USubtitlesComponent;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UEmoteInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USubtitlesComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorComponent* DialogSourceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Emote;
    
    UEmoteInstance();
    UFUNCTION(BlueprintCallable)
    void CompleteAndRemove();
    
};

