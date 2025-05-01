//
//  GameConsole.h
//  CSC195
//
//  Created by Nathan Spackman on 4/21/25.
//
#pragma once
#include "Electronic.h"

class GameConsole : public Electronic {
public:
    void Read(std::ostream& ostream, std::istream& istream) override;
    void Write(std::ostream& ostream) const override;
    std::istream& readFromFile(std::istream& istream) override {
        Electronic::readFromFile(istream);
        istream >> controllerType;
        return istream;
    }
    std::ostream& writeToFile(std::ostream& ostream) const override {
        ostream << "GAMECONSOLE ";
        Electronic::writeToFile(ostream);
        ostream << " " << controllerType;
        return ostream;
    }
    eType GetType() override { return eType::GAMECONSOLE; }

private:
    std::string controllerType;
};