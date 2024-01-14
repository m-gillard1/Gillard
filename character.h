#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class Character {
public:
    
    Character();
    ~Character();


    // Inline getters for attributes
    inline float getSpeed() const { return speed_; }
    inline float getMaxSpeed() const { return max_speed_; }

    
    virtual void accelerate();
    void brake();

    virtual std::string WhatAmI() const = 0;
protected:
    float speed_;
    float max_speed_;
};

#endif 