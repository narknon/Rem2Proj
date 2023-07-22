#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ECursorInteractBehavior.h"
#include "OnCursorInteractEventDelegate.h"
#include "OnCursorOverEventDelegate.h"
#include "CursorResponseManager.generated.h"

class APlayerController;
class UCursorResponseManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UCursorResponseManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCursorOverEvent OnCursorHoverEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCursorInteractEvent OnCursorClickEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* CachedController;
    
public:
    UCursorResponseManager();
    UFUNCTION(BlueprintCallable)
    void SetClickBehavior(ECursorInteractBehavior Behavior);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveState(bool bShouldBeActive);
    
    UFUNCTION(BlueprintCallable)
    static UCursorResponseManager* GetInstance(APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    bool GetActiveState();
    
};

