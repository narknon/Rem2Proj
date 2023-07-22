#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ECursorInteractType.h"
#include "GraphPosition.h"
#include "CachedPotentialMovePieceInfo.h"
#include "RemnantGameBoardUserComponent.generated.h"

class AActor;
class URemnantGameBoardComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REMNANT_API URemnantGameBoardUserComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, Transient, meta=(AllowPrivateAccess=true))
    URemnantGameBoardComponent* GameBoard;
    
public:
    URemnantGameBoardUserComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHandleGamePieceFocusEvent(AActor* Actor, const FGraphPosition& TargetPosition, const FGraphPosition& RootPosition);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCleanupGame();
    
    UFUNCTION(BlueprintCallable)
    void NotifyGamePieceFocusEvent(AActor* Actor, ECursorInteractType InteractType);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateMovePieces(const TArray<FCachedPotentialMovePieceInfo>& PositionInfo, bool bSetVisible, bool bApplyToAll, bool bClearInfo);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetPlayerControlsActive(bool bDoActivate);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetCursorBindings(bool bDoActivate);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientInitializeForGame(URemnantGameBoardComponent* GameBoardComponent);
    
};

