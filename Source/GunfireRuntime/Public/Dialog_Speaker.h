#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDialogSpeakerGender.h"
#include "Dialog_Speaker.generated.h"

UCLASS(Abstract, Blueprintable, Const, MinimalAPI)
class UDialog_Speaker : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDialogSpeakerGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Speaks;
    
    UDialog_Speaker();
};

