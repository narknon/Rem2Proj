#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NamedActorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UNamedActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameID;
    
    UNamedActorComponent();
    UFUNCTION(BlueprintCallable)
    void SetNameID(FName NewNameID);
    
};

