#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EmoteIconState.generated.h"

class UEmote;
class UTexture2D;

USTRUCT(BlueprintType)
struct FEmoteIconState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEmote> Emote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> Reasons;
    
    REMNANT_API FEmoteIconState();
};

