#pragma once
#include "CoreMinimal.h"
#include "AccountAward.h"
#include "ArchetypeAward.generated.h"

class AItem;
class UArchetype;
class URemnantArchetype;

UCLASS(Blueprintable)
class REMNANT_API UArchetypeAward : public UAccountAward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<URemnantArchetype> Archetype;
    
    UArchetypeAward();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<AItem> GetEngramItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UArchetype> GetArchetypeTrait() const;
    
};

