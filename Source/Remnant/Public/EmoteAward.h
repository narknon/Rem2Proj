#pragma once
#include "CoreMinimal.h"
#include "AccountAward.h"
#include "EmoteAward.generated.h"

class UEmote;

UCLASS(Blueprintable)
class REMNANT_API UEmoteAward : public UAccountAward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UEmote> Emote;
    
    UEmoteAward();
};

