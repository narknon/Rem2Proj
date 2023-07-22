#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EMusicEvent.h"
#include "EMusicState.h"
#include "MusicSetInstanceData.h"
#include "MusicSetAsset.generated.h"

class UMusicManager;

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API UMusicSetAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UMusicSetAsset();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Stop(UMusicManager* MusicManager, UPARAM(Ref) FMusicSetInstanceData& InstanceData, const FName& StingerName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetState(UMusicManager* MusicManager, UPARAM(Ref) FMusicSetInstanceData& InstanceData, EMusicState DesiredState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Play(UMusicManager* MusicManager, UPARAM(Ref) FMusicSetInstanceData& InstanceData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEvent(UMusicManager* MusicManager, UPARAM(Ref) FMusicSetInstanceData& InstanceData, EMusicEvent Event);
    
};

