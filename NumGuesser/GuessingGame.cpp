//
//  GuessingGame.cpp
//  CSC195
//
//  Created by Nathan Spackman on 4/3/25.
//
#include <iostream>
#include "GuessingGame.h"



int Game::getInteger(std::string prompt){
    int num;
    std::cout << prompt << std::endl;
    std::cin >> num;
    return num;
}
bool Game::run(){
    int range = getInteger("Enter Range: ");
    num = rand() % range +1;
    bool guessed=false;
    std::cout << "Number is: ";
    std::cout << num << std::endl;
    for (int i=0; i < 3; i++) {
        //guess number
        int guess = getInteger("Enter Guess: ");
        if (guess==num) {
            std::cout << "You Got good job " << std::endl;
            guessed=true;
            break;
        }
        else if (guess>num) {
            std::cout << "You Didn't Get it, Try Guessing Lower " << std::endl;
        }
        else if (guess<num) {
            std::cout << "You Didn't Get it, Try Guessing Higher"  << std::endl;
        }
    }
    if(guessed==false){
        std::cout << "You Didn't Guess it correctly The Number was ";
        std::cout << num << std::endl;
    }
    std::cout << "Play Again?(y/n):";
    std::string choice;
    std::cin >> choice;
    std::cout << choice << std::endl;
    if(choice.at(0)=='y'){
        return true;
    }
    return false;
    
    
    
    
}
    

