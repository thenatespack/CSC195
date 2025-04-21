//
//  Dog.h
//  CSC195
//
//  Created by Nathan Spackman on 4/15/25.
//
#pragma once
#include "Animal.h"
#include "iostream"

class Dog: public Animal
{
    public:
    void Travel();
    Dog();
    protected:
    std::string breed;
};
