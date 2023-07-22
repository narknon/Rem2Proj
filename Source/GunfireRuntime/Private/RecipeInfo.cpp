#include "RecipeInfo.h"

FRecipeInfo::FRecipeInfo() {
    this->Source = NULL;
    this->Recipe = NULL;
    this->CanCraft = false;
    this->IsHidden = false;
    this->IsSecret = false;
    this->CraftQuantity = 0;
}

