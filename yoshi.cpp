#include "yoshi.h"

Yoshi::Yoshi(int numCrests) {
    numCrests_ = new int(numCrests);
}

Yoshi::~Yoshi() {
    delete numCrests_;
}

std::string Yoshi::WhatAmI() const {
    return std::to_string(*numCrests_) + " crested Yoshi";
}

void Yoshi::accelerate(){
    speed_= speed_+2;
}