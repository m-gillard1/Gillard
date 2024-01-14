#include "character.h"
#include <iostream>
#include "mario.h"
#include "yoshi.h"
#include <vector>

int main() {
    // Create an instance of Character
    // Character myCharacter; -> became illegal after addinf the what am i virtual function


    Mario MyMario;
    Yoshi MyYoshi(2);

    // déclaration du vecteur contenant les characters
    std::vector<Character*> characters;

    characters.push_back(&MyMario);
    characters.push_back(&MyYoshi);

    // 'iterators' for loop
    for (const auto& character : characters) {
        character->accelerate();
    }

    // range-based for loop
    for (size_t i = 0; i < characters.size(); ++i) {
        characters[i]->accelerate();
    }

    
    for (const auto& character : characters) {
        std::cout << character->WhatAmI() << "'s Speed: " << character->getSpeed() << std::endl;
    }

    
    
    
    return 0;
}