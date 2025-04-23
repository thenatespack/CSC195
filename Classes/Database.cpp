//
//  Database.cpp
//  CSC195
//
//  Created by Nathan Spackman on 4/21/25.
//
#include "Database.h"
#include "GameConsole.h"
#include "Phone.h"

void Database::Create(Electronic::eType type) {
    if (type == Electronic::eType::Phone) {
        electronics.push_back(new Phone());
    } else if (type == Electronic::eType::Console) {
        electronics.push_back(new GameConsole());
    } else if (type == Electronic::eType::Computer) {
        
    }
}

void Database::DisplayAll() {
    for (const Electronic* obj : electronics) {
        obj->Write(std::cout);
    }
}

void Database::Display(const std::string& name) {
    for (const Electronic* obj : electronics) {
        if (obj->GetName() == name) {
            obj->Write(std::cout);
        }
    }
}
void Database::Display(Electronic::eType type){
    for (const Electronic* obj : electronics) {
        if (obj->GetType() == type) {
            obj->Write(std::cout);
        }
    }
}
