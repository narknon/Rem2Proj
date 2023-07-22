#pragma once
#include "CoreMinimal.h"
#include "RecipeList.generated.h"

class UCraftingRecipe_Base;

USTRUCT(BlueprintType)
struct FRecipeList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCraftingRecipe_Base*> Recipes;
    
    GUNFIRERUNTIME_API FRecipeList();
};

