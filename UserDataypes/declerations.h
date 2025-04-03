//
//  declerations.h
//  CSC195
//
//  Created by Nathan Spackman on 4/2/25.
//
#include <iostream>
#pragma once

#ifndef declerations_h
#define declerations_h

class Sandwhich
{
public:
    std::string meat;
    float weight;
    void heatSandwhich();
private:
    bool isHot;
};


#endif /* declerations_h */
