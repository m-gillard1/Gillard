#ifndef YOSHI_H
#define YOSHI_H

#include "character.h"  

class Yoshi : public Character {
public:
    // Constructor
    Yoshi(int numCrests);

    // Destructor
    ~Yoshi();

    std::string WhatAmI() const;

    void accelerate();

    
private:
    int* numCrests_;
};

#endif 