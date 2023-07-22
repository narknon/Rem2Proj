#pragma once
#include "CoreMinimal.h"
#include "ValidationListBase.h"
#include "ValidationList.generated.h"

class UValidationTableEntry;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UValidationList : public UValidationListBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UValidationTableEntry*> ValidationEntries;
    
    UValidationList();
};

