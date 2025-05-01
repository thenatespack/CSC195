//
//  main.cpp
//  ClassesExercise
//
//  Created by Nathan Spackman on 4/30/25.
//
#include <iostream>
#include "Database.h"
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
//#include <crtdbg.h>

int main() {
    Database* database= new Database();
    bool quit = false;

    while (!quit) {
        std::cout << "1 - Create\n"
                  << "2 - Display All\n"
                  << "3 - Display by Name\n"
                  << "4 - Display by Type\n"
                  << "5 - Save to File\n"
                  << "6 - Load from File\n"
                  << "7 - Quit\n";
        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::cout << "Enter type (0 for PHONE, 1 for GAMECONSOLE): ";
                int type;
                std::cin >> type;
                if (type != 0 && type != 1) {
                    std::cout << "Invalid type.\n";
                    break;
                }
                Electronic::eType t = (type == 0) ? Electronic::eType::PHONE : Electronic::eType::GAMECONSOLE;
                database->Create(t);
                break;
            }
            case 2:
                database->DisplayAll();
                break;
            case 3: {
                std::string name;
                std::cout << "Enter name: ";
                std::cin >> name;
                database->Display(name);
                break;
            }
            case 4: {
                std::cout << "Enter type (0 for PHONE, 1 for GAMECONSOLE): ";
                int type;
                std::cin >> type;
                if (type != 0 && type != 1) {
                    std::cout << "Invalid type.\n";
                    break;
                }
                Electronic::eType t = (type == 0) ? Electronic::eType::PHONE : Electronic::eType::GAMECONSOLE;
                database->Display(t);
                break;
            }
            case 5: {
                std::string filename;
                std::cout << "Enter filename to save: ";
                std::cin >> filename;
                try {
                    database->Save(filename);
                    std::cout << "Saved to " << filename << "\n";
                } catch (const std::exception& e) {
                    std::cout << "Error: " << e.what() << "\n";
                }
                break;
            }
            case 6: {
                std::string filename;
                std::cout << "Enter filename to load: ";
                std::cin >> filename;
                try {
                    database->Load(filename);
                    std::cout << "Loaded from " << filename << "\n";
                } catch (const std::exception& e) {
                    std::cout << "Error: " << e.what() << "\n";
                }
                break;
            }
            case 7:
                quit = true;
                break;
            default:
                std::cout << "Invalid choice.\n";
                break;
        }
    }


    delete database;
    //_CrtDumpMemoryLeaks();
    return 0;
}
