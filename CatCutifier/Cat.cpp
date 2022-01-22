#include "Cat.h"

/**
 * @brief Increases the cuteness level of the cat.
 *
 * Be careful not to exceed configMAX_CUTENESS. Otherwise, the
 * Universe might explode. It would likely be worth it. Don't.
 */
void Cat::increase_cuteness()
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