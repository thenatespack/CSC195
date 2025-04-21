//
//  Database.h
//  CSC195
//
//  Created by Nathan Spackman on 4/21/25.
//
#include "Phone.h"
#include "GameConsole.h"

class Database {
public:
    ~Database();
    void Create(Electronic::eType type);
    void DisplayAll();
    void Display(const std::string& name);
    void Display(Electronic::eType type);

private:
    std::vector<Electronic*> objects;
};
