//
//  Database.h
//  CSC195
//
//  Created by Nathan Spackman on 4/21/25.
//
#pragma once
#include "Phone.h"
#include "GameConsole.h"
#include <memory>

class Database {
public:
    Database() = default;
    ~Database() = default; // unique_ptr handles cleanup
    void Create(Electronic::eType type);
    void DisplayAll();
    void Display(const std::string& name);
    void Display(Electronic::eType type);
    void Save(const std::string& filename);
    void Load(const std::string& filename);

private:
    std::vector<std::unique_ptr<Electronic>> objects;
};