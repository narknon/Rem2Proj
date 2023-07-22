#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "RecipeList.h"
#include "CraftingRecipeManager.generated.h"

class AItem;
class UCraftingRecipeManager;
class UCraftingRecipe_Base;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UCraftingRecipeManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FRecipeList> Recipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UCraftingRecipe_Base*> RecipeLookup;
    
public:
    UCraftingRecipeManager();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UCraftingRecipeManager* GetInstance(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TSet<TSoftClassPtr<AItem>> GetAllMaterials(UObject* WorldContextObject);
    
};

