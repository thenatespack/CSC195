//
//  Console.cpp
//  CSC195
//
//  Created by Nathan Spackman on 4/21/25.
//
//
//  Phone.h
//  CSC195
//
//  Created by Nathan Spackman on 4/21/25.
//
#pragma once
#include "Electronic.h"

class GameConsole : public Electronic {
    std::string platfrom;
public:
    /*void Read(std::istream& istream, std::ostream& ostream) override {
        long uptime;
        ostream << "Enter name: "; istream >> name;
        ostream << "Enter isOn: "; istream >> isOn;
        ostream << "Enter upTime: "; istream >> uptime;
        setUpTime(uptime);
        ostream << "Enter Coverage: "; istream >> platfrom;
    }*/
    
    void Write(std::ostream& ostr) const override {
        ostr << "GameConsole: " << name << ", isOn: " << isOn << ", upTime: " << getUpTime() << ", Platfrom: " << platfrom  << std::endl;
    }
    Electronic::eType GetType() const override {
        return eType::Console;
    }

};


