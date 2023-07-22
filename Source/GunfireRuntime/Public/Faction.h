#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EAffiliation.h"
#include "Templates/SubclassOf.h"
#include "Faction.generated.h"

class AActor;
class UFaction;

UCLASS(Abstract, Blueprintable, Const)
class GUNFIRERUNTIME_API UFaction : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFaction> InheritAffiliations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAffiliation AffiliationTowardsSameFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ApplyFriendlyFireDamageScalar;
    
    UFaction();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EAffiliation GetAffiliationForActors(const AActor* Actor1, const AActor* Actor2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EAffiliation GetAffiliation(TSubclassOf<UFaction> Faction1, TSubclassOf<UFaction> Faction2);
    
};

