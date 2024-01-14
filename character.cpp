#include "character.h"

// Default constructor:
Character::Character()  {   
    speed_=0;
    max_speed_=10; 
}

Character::~Character() {
}

void Character::accelerate(){
    speed_=speed_ +1;
}

void Character::brake(){
    speed_=speed_ -1;
}



