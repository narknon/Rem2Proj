#pragma once
#include "CoreMinimal.h"
#include "EventTreeNode.h"
#include "Templates/SubclassOf.h"
#include "EventTreeNode_Emote.generated.h"

class UDialog_Emote;
class UDialog_Speaker;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UEventTreeNode_Emote : public UEventTreeNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDialog_Speaker> Speaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TargetAllPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDialog_Emote> Emote;
    
    UEventTreeNode_Emote();
};

