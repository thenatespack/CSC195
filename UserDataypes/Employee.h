//
//  declerations.h
//  CSC195
//
//  Created by Nathan Spackman on 4/2/25.
//
#include <iostream>
#include <string>
#pragma once

#ifndef declerations_h
#define declerations_h

class Employee {
public:
    void Read();
    void Write();

private:
    std::string name;
    short age;
    unsigned int zipcode;
    float wage;
    float hoursWorked;

    static const float TAX; // Declare tax as a static constant
};

#endif /* declerations_h */
