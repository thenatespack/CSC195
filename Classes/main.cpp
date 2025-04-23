//
//  main.cpp
//  Classes
//
//  Created by Nathan Spackman on 4/21/25.
//

#include <iostream>
#include "Database.h"

int main(int argc, const char * argv[]) {
    Database database;
    bool quit = false;
    while (!quit)
    {
      std::cout << "1 - Create\n2 - Display All\n3 - Display by Name\n4 - Display by Type\n5 - Quit\n";
      int choice;
      std::cin >> choice;
      switch (choice)
      {
        case 1: // Create object by type break;
        case 2: // DisplayAll(); break;
        case 3: // Ask for name, then call database.Display(name) break;
        case 4:
        {
          std::cout << "Enter type (0 for TYPE1, 1 for TYPE2): ";
          int t;
          std::cin >> t;
          database.Display(static_cast<Electronic::eType>(t)); break;
        }
        case 5:
          quit = true;
          break;
        }
    }
    return 0;
}
