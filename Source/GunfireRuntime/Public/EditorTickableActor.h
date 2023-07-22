#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EditorTickableActor.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API AEditorTickableActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTickableInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickEditorInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickEditorDelta;
    
    AEditorTickableActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTickEditor();
    
};

