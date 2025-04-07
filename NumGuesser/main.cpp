//
//  main.cpp
//  NumGuesser
//
//  Created by Nathan Spackman on 4/3/25.
//

#include <iostream>
#include "GuessingGame.h"

int main(int argc, const char * argv[]) {
    //creates game
    Game game;
    //runs while game returns true
    while(game.run());
    //ends
    return 0;
}

