#pragma once
#include "CoreMinimal.h"
#include "EPingSubRequestType.h"
#include "PingSubContext.h"
#include "PingRequestSubContext.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class REMNANT_API UPingRequestSubContext : public UPingSubContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPingSubRequestType RequestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequestDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* RequestHudIcon;
    
    UPingRequestSubContext();
};

