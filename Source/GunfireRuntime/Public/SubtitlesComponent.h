#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SubtitleDelegateDelegate.h"
#include "SubtitleInfo.h"
#include "SubtitlesComponent.generated.h"

class AActor;
class UEmoteInstance;
class USubtitleInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API USubtitlesComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultAudioAttachSocket;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubtitleDelegate OnAddSubtitle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubtitleDelegate OnRemoveSubtitle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USubtitleInstance*> Subtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, UEmoteInstance*> EmoteInstances;
    
public:
    USubtitlesComponent();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRemoveSubtitle(int32 ID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRemoveEmote(AActor* Source);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveSubtitle(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEmoteInstance(AActor* Source);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRemoveSubtitle(int32 ID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRemoveEmote(AActor* Source);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAddSubtitle(const FSubtitleInfo& Info);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAddEmote(AActor* Source, UActorComponent* SourceComponent, FName Emote);
    
public:
    UFUNCTION(BlueprintCallable)
    USubtitleInstance* AddSubtitle(FSubtitleInfo& SubtitleInfo);
    
    UFUNCTION(BlueprintCallable)
    UEmoteInstance* AddEmoteInstance(AActor* Source, UActorComponent* SourceComponent, FName Emote);
    
};

