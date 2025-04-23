//
//  main.cpp
//  CSC195
//
//  Created by Nathan Spackman on 4/1/25.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    std::cout << "Enter name: " << std::endl;
    int age;
    std::getline(std::cin,age);
    std::cin >> age;
    std::cout << age << std::endl;
    return 0;
}
