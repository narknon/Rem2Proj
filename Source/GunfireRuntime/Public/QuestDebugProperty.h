#pragma once
#include "CoreMinimal.h"
#include "QuestDebugProperty.generated.h"

USTRUCT(BlueprintType)
struct FQuestDebugProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    GUNFIRERUNTIME_API FQuestDebugProperty();
};

