//
//  main.cpp
//  NumGuesser
//
//  Created by Nathan Spackman on 4/3/25.
//

#include <iostream>
#include "GuessingGame.h"

int main(int argc, const char * argv[]) {
    Game game;
    while(game.run());
    return 0;
}

