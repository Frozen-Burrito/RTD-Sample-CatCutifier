#include "Cat.h"

/**
 * @brief Increases the cuteness level of the cat.
 *
 * Be careful not to exceed configMAX_CUTENESS. Otherwise, the
 * Universe might explode. It would likely be worth it. Don't.
 * 
 * @param addedCuteness The cuteness to be added to the current cuteness.
 */
void Cat::increase_cuteness(int addedCuteness)
{
    std::cout << "Performing some cuteness magic..." << '\n';
}

/**
 * @brief The cat is petted by someone. EXP is earned in return.
 *
 * The EXP obtained is set to a fixed value.
 *
 * @return EXP earned.
 */
int Cat::pet()
{
    int exp{ 30 };

    std::cout << "You petted the cat. Well done." << '\n';

    return exp;
}

/**
 * @brief The cat's name is set to a new name.
 *
 * This function should only be called once for each cat during 
 * execution. However, some exceptions to this guideline apply.
* 
 *
 * @param newName The name of the cat.
 */
void Cat::set_name(const std::string& newName)
{
    name = newName;
}