#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Dialog_Emote.generated.h"

UCLASS(Abstract, Blueprintable, Const, MinimalAPI)
class UDialog_Emote : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimationTag;
    
    UDialog_Emote();
};

