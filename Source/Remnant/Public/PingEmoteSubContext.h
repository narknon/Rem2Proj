#pragma once
#include "CoreMinimal.h"
#include "PingSubContext.h"
#include "PingEmoteSubContext.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class REMNANT_API UPingEmoteSubContext : public UPingSubContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EmoteIndex;
    
    UPingEmoteSubContext();
};

