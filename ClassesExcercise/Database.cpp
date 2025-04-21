//
//  Database.cpp
//  CSC195
//
//  Created by Nathan Spackman on 4/21/25.
//

#include "Database.h"

Database::~Database() {
    for (Electronic* obj : objects) {
        delete obj;
    }
}

void Database::Create(Electronic::eType type) {
    Electronic* obj = nullptr;
    switch (type) {
        case Electronic::eType::PHONE:
            obj = new Phone;
            break;
        case Electronic::eType::GAMECONSOLE:
            obj = new GameConsole;
            break;
    }
    if (obj) {
        obj->Read(std::cout, std::cin);
        objects.push_back(obj);
    }
}

void Database::DisplayAll() {
    for (Electronic* obj : objects) {
        obj->Write(std::cout);
        std::cout << "------------------------\n";
    }
}

void Database::Display(const std::string& name) {
    for (Electronic* obj : objects) {
        if (obj->GetName() == name) {
            obj->Write(std::cout);
            std::cout << "------------------------\n";
        }
    }
}

void Database::Display(Electronic::eType type) {
    for (Electronic* obj : objects) {
        if (obj->GetType() == type) {
            obj->Write(std::cout);
            std::cout << "------------------------\n";
        }
    }
}
