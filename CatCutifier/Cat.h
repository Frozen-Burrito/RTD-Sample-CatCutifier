#pragma once 

#include <iostream>
#include <string>

/**
 * @brief Represents a cute ninja cat
 * 
 * An extremely fluffy feline. The representation is up to %72 accurate with 
 * human-cat interactions. It is only %2 accurate with real cat behaviour.
 */
class Cat
{
    std::string name{ "" };

public:
    void increase_cuteness(int addedCuteness);

    int pet();

    void set_name(const std::string& name);
};