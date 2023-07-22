#pragma once
#include "CoreMinimal.h"
#include "ActorStateDecorator.h"
#include "EMoveInputMethod.h"
#include "MoveInputStateDecorator.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UMoveInputStateDecorator : public UActorStateDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestoreOnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMoveInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MoveInputEnableWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MoveInputDisableWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideMoveInputMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoveInputMethod MoveInputMethod;
    
    UMoveInputStateDecorator();
};

