#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/GameInstance.h"
#include "EFadeDirection.h"
#include "GameInstanceShutdownEventDelegate.h"
#include "GameInstanceStartedEventDelegate.h"
#include "OnFadeIntoLevelCompletedDelegateDelegate.h"
#include "OnGameInstanceStartDelegate.h"
#include "OnLocalPlayerPawnControlledDelegate.h"
#include "QuitEventDelegate.h"
#include "SaveEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "GameInstanceGunfire.generated.h"

class APawn;
class UAmbientAudioManager;
class UAssetCache;
class UGameInstanceGunfire;
class UObject;
class UPathSharingManager;
class UUserWidget;
class UWorld;

UCLASS(Blueprintable, NonTransient)
class GUNFIRERUNTIME_API UGameInstanceGunfire : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> MainMenuLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAssetCache> AssetCacheClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFadeIntoLevelCompletedDelegate OnFadeIntoLevelCompletedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalPlayerPawnControlled OnLocalPlayerPawnControlledEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameInstanceStartedEvent OnGameInstanceStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameInstanceShutdownEvent OnGameInstanceShutdownEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameInstanceStart OnGameInstanceStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuitEvent EventOnPreQuitToMainMenu;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveEvent OnSaveStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveEvent OnSaveFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> NotificationOkDialog;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* LocalPlayerPawn;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAmbientAudioManager* AmbientAudioManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPathSharingManager* PathSharingManager;
    
public:
    UGameInstanceGunfire();
    UFUNCTION(BlueprintCallable)
    void QuitToMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void OnShutdown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreQuitToMainMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSaving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInMainMenuLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInGameplay() const;
    
    UFUNCTION(BlueprintCallable)
    bool ImmediatelyFadeScreen(bool bIsFaded, FLinearColor FadeColor, bool bFadeAudio);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static APawn* GetLocalPlayerPawn(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="pWorldContextObject"))
    static UGameInstanceGunfire* GetInstance(const UObject* pWorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UAssetCache* GetAssetCache();
    
    UFUNCTION(BlueprintCallable)
    bool FadeScreen(EFadeDirection FadeDirection, float FadeTime, FLinearColor FadeColor, bool bFadeAudio, bool bReset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSave() const;
    
};

