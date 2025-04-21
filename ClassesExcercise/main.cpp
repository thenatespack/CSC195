//
//  main.cpp
//  ClassesExcercise
//
//  Created by Nathan Spackman on 4/21/25.
//

#include <iostream>
#include "Database.h"

// Main Function
int main() {
    Database database;
    bool quit = false;

    while (!quit) {
        std::cout << "1 - Create\n2 - Display All\n3 - Display by Name\n4 - Display by Type\n5 - Quit\n";
        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::cout << "Enter type (0 for Phone, 1 for GameConsole): ";
                int t;
                std::cin >> t;
                database.Create(static_cast<Electronic::eType>(t));
                break;
            }
            case 2:
                database.DisplayAll();
                break;
            case 3: {
                std::string name;
                std::cout << "Enter name: ";
                std::cin >> name;
                database.Display(name);
                break;
            }
            case 4: {
                std::cout << "Enter type (0 for Phone, 1 for GameConsole): ";
                int t;
                std::cin >> t;
                database.Display(static_cast<Electronic::eType>(t));
                break;
            }
            case 5:
                quit = true;
                break;
            default:
                std::cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
