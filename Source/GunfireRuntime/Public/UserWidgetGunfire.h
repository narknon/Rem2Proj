#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OnRemovedFromParentDelegate.h"
#include "OnRootVisibilityUpdateDelegate.h"
#include "UserWidgetGunfire.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GUNFIRERUNTIME_API UUserWidgetGunfire : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRootVisibilityUpdate OnRootVisibilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemovedFromParent OnRemovedFromParent;
    
    UUserWidgetGunfire();
};

