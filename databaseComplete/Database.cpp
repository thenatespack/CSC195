//
//  Database.cpp
//  CSC195
//
//  Created by Nathan Spackman on 4/21/25.
//
#include "Database.h"
#include <fstream>
#include <stdexcept>

void Database::Create(Electronic::eType type) {
    std::unique_ptr<Electronic> obj;
    switch (type) {
        case Electronic::eType::PHONE:
            obj = std::make_unique<Phone>();
            break;
        case Electronic::eType::GAMECONSOLE:
            obj = std::make_unique<GameConsole>();
            break;
    }
    if (obj) {
        obj->Read(std::cout, std::cin);
        objects.push_back(std::move(obj));
    }
}

void Database::DisplayAll() {
    for (const auto& obj : objects) {
        std::cout << *obj; // Uses console output operator<<
        std::cout << "------------------------\n";
    }
}

void Database::Display(const std::string& name) {
    for (const auto& obj : objects) {
        if (obj->GetName() == name) {
            std::cout << *obj;
            std::cout << "------------------------\n";
        }
    }
}

void Database::Display(Electronic::eType type) {
    for (const auto& obj : objects) {
        if (obj->GetType() == type) {
            std::cout << *obj;
            std::cout << "------------------------\n";
        }
    }
}

void Database::Save(const std::string& filename) {
    std::ofstream ofs(filename);
    if (!ofs) {
        throw std::runtime_error("Unable to open file for writing: " + filename);
    }
    for (const auto& obj : objects) {
        ofs << *obj << "\n"; // Uses file output operator<<
    }
}

void Database::Load(const std::string& filename) {
    std::ifstream ifs(filename);
    if (!ifs) {
        throw std::runtime_error("Unable to open file for reading: " + filename);
    }
    objects.clear(); // Clear existing objects
    std::string type;
    while (ifs >> type) {
        std::unique_ptr<Electronic> obj;
        if (type == "PHONE") {
            obj = std::make_unique<Phone>();
        } else if (type == "GAMECONSOLE") {
            obj = std::make_unique<GameConsole>();
        } else {
            ifs.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Skip invalid line
            continue;
        }
        ifs >> *obj; // Uses file input operator>>
        objects.push_back(std::move(obj));
    }
}