//
//  main.cpp
//  ClassesExercise
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
        std::cout << "1 - Create\n"
                  << "2 - Display All\n"
                  << "3 - Display by Name\n"
                  << "4 - Display by Type\n"
                  << "5 - Quit\n";
        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string name;
                int type;
                std::cout << "Enter type (0 for PHONE, 1 for GAMECONSOLE): ";
                std::cin >> type;
                Electronic::eType t = (type == 0) ? Electronic::eType::PHONE : Electronic::eType::GAMECONSOLE;
                database.Create(t); // Assuming Create takes a name and type as arguments
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
                std::cout << "Enter type (0 for PHONE, 1 for GAMECONSOLE): ";
                int type;
                std::cin >> type;

                if (type != 0 && type != 1) {
                    std::cout << "Invalid type. Please try again.\n";
                    break;
                }

                Electronic::eType t = (type == 0) ? Electronic::eType::PHONE : Electronic::eType::GAMECONSOLE;
                database.Display(t); // Assuming Display is overloaded for eType
                break;
            }
            case 5:
                quit = true;
                break;

            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    }

    return 0;
}
