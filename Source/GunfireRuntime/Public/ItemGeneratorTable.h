#pragma once
#include "CoreMinimal.h"
#include "EItemGenTableType.h"
#include "ItemGenerator.h"
#include "ItemGeneratorTable.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UItemGeneratorTable : public UItemGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemGenTableType TableType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UItemGenerator*> Entries;
    
    UItemGeneratorTable();
};

