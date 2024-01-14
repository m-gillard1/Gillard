#ifndef MARIO_H
#define MARIO_H

#include "character.h"  

class Mario : public Character {
public:
    // Constructor
    Mario();

    // destrctreur
    ~Mario();

    std::string WhatAmI() const;
};

#endif 