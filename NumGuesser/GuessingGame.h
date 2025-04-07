//
//  GuessingGame.h
//  CSC195
//
//  Created by Nathan Spackman on 4/3/25.
//

#pragma once

#ifndef declerations_h
#define declerations_h

class Game{
public:
    
    int getInteger(std::string prompt);
    bool run();
    
private:
    int num;
};

#endif /* declerations_h */
