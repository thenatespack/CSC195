//
//  Database.h
//  CSC195
//
//  Created by Nathan Spackman on 4/21/25.
//
#pragma once

#include "GameConsole.h"
#include "Phone.h"
#include <memory>

class Database {
    std::vector<Electronic*> electronics;

public:
    ~Database(){
        for (Electronic* obj : electronics) {
            delete obj;
        }
        electronics.clear(); 
    }
    void Create(Electronic::eType type);
    void DisplayAll();
    void Display(const std::string& name);
    void Display(Electronic::eType type);
    void Read(){
        
    }
};
