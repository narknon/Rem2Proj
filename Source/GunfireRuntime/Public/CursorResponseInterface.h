#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CursorResponseInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UCursorResponseInterface : public UInterface {
    GENERATED_BODY()
};

class ICursorResponseInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldUpdateCursorHoverState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnObjectFocusReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnObjectFocused();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCursorExit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCursorEnter();
    
};

