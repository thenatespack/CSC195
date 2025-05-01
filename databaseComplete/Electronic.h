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
#include <fstream>

class Electronic {
public:
    enum class eType { PHONE, GAMECONSOLE };
    Electronic() = default;
    virtual ~Electronic() = default;

    virtual void Read(std::ostream& ostream, std::istream& istream) {
        ostream << "Enter name: ";
        istream >> name;
        ostream << "Enter price: ";
        istream >> price;
    }

    virtual void Write(std::ostream& ostream) const {
        ostream << "Name: " << name << "\nPrice: $" << price << "\n";
    }

    // Operator overloads for file I/O
    friend std::istream& operator>>(std::istream& is, Electronic& electronic) {
        return electronic.readFromFile(is);
    }

    friend std::ostream& operator<<(std::ostream& os, const Electronic& electronic) {
        return electronic.writeToFile(os);
    }

    // Virtual functions for derived classes to override
    virtual std::istream& readFromFile(std::istream& is) {
        is >> name >> price;
        return is;
    }

    virtual std::ostream& writeToFile(std::ostream& os) const {
        os << name << " " << price;
        return os;
    }

    virtual eType GetType() = 0;
    std::string GetName() const { return name; }
    double GetPrice() const { return price; }

    // Comparison operator
    bool operator==(const Electronic& other) const {
        return name == other.name;
    }

protected:
    std::string name;
    double price = 0.0;
};
