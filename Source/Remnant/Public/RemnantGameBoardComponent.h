#pragma once
#include "CoreMinimal.h"
#include "GraphPosition.h"
#include "WeightedGraphComponent.h"
#include "BoardRow.h"
#include "BoardRules.h"
#include "CachedPotentialMovePieceInfo.h"
#include "CachedUserPiecePositions.h"
#include "EBoardLayout.h"
#include "EBoardUser.h"
#include "OnGameWonDelegate.h"
#include "OnPieceModifiedDelegate.h"
#include "OnPiecePositionUpdatedDelegate.h"
#include "OnStartGameDelegate.h"
#include "OnTurnStateChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "RemnantGameBoardComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REMNANT_API URemnantGameBoardComponent : public UWeightedGraphComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartGame OnStartGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTurnStateChanged OnTurnStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTurnStateChanged OnTurnEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPiecePositionUpdated OnPiecePositionUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPieceModified OnPieceAddedOrRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPieceModified OnPotentialMovePieceAddedOrRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPieceModified OnPiecePositionReset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameWon OnGameWon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> PlayerPieceBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> PlayerPotentialMoveVisualBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> AIPieceBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowDiagonalMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSlotInfoDeterminesDiagonalMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScaleRulesByDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoardRules GameRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FBoardRules> DifficultyScaledGameRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDefaultConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoardRow> DefaultConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoardRow> StartingConfiguration;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EBoardUser CurrentTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentPlayer, meta=(AllowPrivateAccess=true))
    AActor* CurrentPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCachedPotentialMovePieceInfo> CachedMoveVisualPieces;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EBoardUser, FCachedUserPiecePositions> CachedUserPieces;
    
public:
    URemnantGameBoardComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdatePieceActorLocations();
    
    UFUNCTION(BlueprintCallable)
    void StartTurn(bool bIsResuming);
    
    UFUNCTION(BlueprintCallable)
    void StartGame(bool bResetBoardState, AActor* Player, AActor* Opponent);
    
    UFUNCTION(BlueprintCallable)
    void PauseTurn();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentPlayer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameInProgress() const;
    
    UFUNCTION(BlueprintCallable)
    void GetPositionsForUser(EBoardUser User, UPARAM(Ref) TArray<FGraphPosition>& OutPositions);
    
    UFUNCTION(BlueprintCallable)
    void EndTurn();
    
    UFUNCTION(BlueprintCallable)
    void EndGame(bool bResetBoard, EBoardLayout GraphLayout);
    
};

