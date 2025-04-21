//
//  main.cpp
//  oop
//
//  Created by Nathan Spackman on 4/15/25.
//

#include <iostream>
#include "Dog.h"

int main(int argc, const char * argv[]) {
    Animal* animal=new Animal;
    animal->Travel();
    Dog dog;
    dog.Travel();
    return 0;
}
