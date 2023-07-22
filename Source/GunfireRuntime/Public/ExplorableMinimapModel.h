#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "RegisteredEntity.h"
#include "ExplorableMinimapModel.generated.h"

class AExplorableMinimapModel;
class UCurveFloat;
class UMapGenComponent;
class UObject;
class USceneComponent;
class UUserWidget;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API AExplorableMinimapModel : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ModelScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EntityGlobalScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox TileBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TileBoundsOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox ModelBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibilityRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibilityHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* VisibilityCurveHoriz;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* VisibilityCurveVertical;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GridResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WidgetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WidgetMinSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WidgetMaxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FullMapSize;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* FullScreenOverlayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MinimapScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FRegisteredEntity> RegisteredEntityMap;
    
public:
    AExplorableMinimapModel();
    UFUNCTION(BlueprintCallable)
    void SetFullscreenOverlayWidget(UUserWidget* OverlayWidget);
    
    UFUNCTION(BlueprintCallable)
    void RevealHiddenArea(AActor* ContextActor, int32 HiddenAreaID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUninitialize();
    
    UFUNCTION(BlueprintCallable)
    void OnTileVisibilityUpdate(int32 ID, bool Visible);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMinimapEntitySpawnUnregistered(AActor* Entity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMinimapEntitySpawnRegistered(AActor* Entity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMinimapEntityRegistrationChanged(AActor* EntityOwner, bool IsRegistering);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMapGenFullyLoaded(UMapGenComponent* Component);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVisibilityAtLocation(const FVector& WorldLocation, FVector Extents) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AExplorableMinimapModel* GetExplorableMinimapModel(const UObject* WorldContextObject);
    
};

