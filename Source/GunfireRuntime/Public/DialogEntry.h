#pragma once
#include "CoreMinimal.h"
#include "SoundEntryBase.h"
#include "Templates/SubclassOf.h"
#include "DialogEntry.generated.h"

class UDialogLine;
class UDialogVocalRange;
class UDialog_Speaker;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UDialogEntry : public USoundEntryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDialog_Speaker> Speaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDialogVocalRange> VocalRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCinematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDialogLine*> DialogLines;
    
    UDialogEntry();
};

