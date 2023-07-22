#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ArchetypeNameCombo.generated.h"

class UArchetype;

USTRUCT(BlueprintType)
struct REMNANT_API FArchetypeNameCombo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UArchetype> ArchetypeA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UArchetype> ArchetypeB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ComboName;
    
    FArchetypeNameCombo();
};

