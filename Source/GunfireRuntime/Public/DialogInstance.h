#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DialogCompleteEventDelegate.h"
#include "DialogInstance.generated.h"

class AActor;
class UDialogManager;
class USubtitleInstance;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UDialogInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogCompleteEvent OnComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDialogManager* DialogManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USubtitleInstance*> Subtitles;
    
public:
    UDialogInstance();
    UFUNCTION(BlueprintCallable)
    void OnSubtitleComplete(USubtitleInstance* Subtitle);
    
    UFUNCTION(BlueprintCallable)
    void OnSubtitleAdded(USubtitleInstance* Subtitle);
    
    UFUNCTION(BlueprintCallable)
    bool IsDialogSource(AActor* Source);
    
    UFUNCTION(BlueprintCallable)
    void ForceComplete();
    
    UFUNCTION(BlueprintCallable)
    void Complete();
    
};

