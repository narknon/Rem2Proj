#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "WeaponTracePath.h"
#include "KinematicUtil.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UKinematicUtil : public UObject {
    GENERATED_BODY()
public:
    UKinematicUtil();
    UFUNCTION(BlueprintCallable)
    static void AddSegmentToWeaponTracePath(UPARAM(Ref) FWeaponTracePath& InOutPath, const FVector& TraceStart, const FVector& TraceEnd, UPrimitiveComponent* StartComponent, FName StartBoneName);
    
};

