#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EEntitlementPlatform.h"
#include "Templates/SubclassOf.h"
#include "EntitlementType.generated.h"

class UEntitlementType;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UEntitlementType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEntitlementPlatform, FString> PlatformEntitlementIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MissingEntitlementStatusMessage;
    
    UEntitlementType();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool HasEntitlement(UObject* WorldContextObject, TSubclassOf<UEntitlementType> Entitlement);
    
};

