#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PersistenceSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class GUNFIRESAVESYSTEM_API UPersistenceSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowEditorSaving;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutomaticallyCreateSave;
    
    UPersistenceSettings();
};

