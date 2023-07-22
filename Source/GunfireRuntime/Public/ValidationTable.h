#pragma once
#include "CoreMinimal.h"
#include "ValidationEntryBase.h"
#include "ValidationTable.generated.h"

class UValidationListBase;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UValidationTable : public UValidationEntryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UValidationListBase*> ValidationList;
    
    UValidationTable();
};

