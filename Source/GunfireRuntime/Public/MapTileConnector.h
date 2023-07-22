#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "MapTileConnector.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UMapTileConnector : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UMapTileConnector();
    UFUNCTION(BlueprintCallable)
    bool IsConnectorEnabled();
    
};

