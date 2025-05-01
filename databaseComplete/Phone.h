//
//  Phone.h
//  CSC195
//
//  Created by Nathan Spackman on 4/21/25.
//#pragma once
#include "Electronic.h"

class Phone : public Electronic {
public:
    void Read(std::ostream& ostream, std::istream& istream) override;
    void Write(std::ostream& ostream) const override;
    std::istream& readFromFile(std::istream& istream) override {
        Electronic::readFromFile(istream);
        istream >> storage;
        return istream;
    }
    std::ostream& writeToFile(std::ostream& ostream) const override {
        ostream << "PHONE ";
        Electronic::writeToFile(ostream);
        ostream << " " << storage;
        return ostream;
    }
    eType GetType() override { return eType::PHONE; }

private:
    int storage = 0;
};