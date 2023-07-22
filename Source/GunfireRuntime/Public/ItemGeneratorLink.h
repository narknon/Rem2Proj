#pragma once
#include "CoreMinimal.h"
#include "ItemGenerator.h"
#include "ItemGeneratorLink.generated.h"

class UItemGeneratorTable;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UItemGeneratorLink : public UItemGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemGeneratorTable* Table;
    
    UItemGeneratorLink();
};

