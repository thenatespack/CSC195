//
//  Electronic.h
//  CSC195
//
//  Created by Nathan Spackman on 4/21/25.
//
#pragma once
#include <iostream>
#include <string>
#include <vector>
class Electronic {
public:
    enum class eType { PHONE, GAMECONSOLE };

    Electronic() = default;
    virtual ~Electronic() = default;

    virtual void Read(std::ostream& ostream, std::istream& istream) {
        // Default implementation
        ostream << "Reading Electronic data...\n";
    }
    virtual void Write(std::ostream& ostream) {
        // Default implementation
        ostream << "Writing Electronic data...\n";
    }
    virtual eType GetType() = 0;

    std::string GetName() const { return name; }

protected:
    std::string name;
    double price = 0.0;
};
