#pragma once
#include "CoreMinimal.h"
#include "TutorialPrompt.h"
#include "TutorialPromptDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FTutorialPromptDelegate, FName, ID, AActor*, Actor, const FTutorialPrompt&, Prompt, float, ExpirationTime);

