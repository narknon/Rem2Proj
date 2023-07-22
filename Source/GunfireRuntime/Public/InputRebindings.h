#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "EnhancedActionKeyMapping.h"
#include "RebindedInputAction.h"
#include "RebindedInputAxis.h"
#include "InputRebindings.generated.h"

class UInputMappingContext;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UInputRebindings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRebindedInputAction> ActionRebindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRebindedInputAxis> AxisRebindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInputMappingContext* AddedMappingContexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInputMappingContext* RemovedMappingContexts;
    
    UInputRebindings();
    UFUNCTION(BlueprintCallable)
    static void ResetInputRebindings();
    
    UFUNCTION(BlueprintCallable)
    static void RemoveEnhancedActionRebinding(const FEnhancedActionKeyMapping& TemplateMapping);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveAxisRebinding(const FInputAxisKeyMapping& Axis);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveActionRebinding(const FInputActionKeyMapping& Action);
    
    UFUNCTION(BlueprintCallable)
    static void AddEnhancedActionRebinding(const FEnhancedActionKeyMapping& TemplateMapping);
    
    UFUNCTION(BlueprintCallable)
    static void AddAxisRebinding(const FInputAxisKeyMapping& Axis);
    
    UFUNCTION(BlueprintCallable)
    static void AddActionRebinding(const FInputActionKeyMapping& Action);
    
};

