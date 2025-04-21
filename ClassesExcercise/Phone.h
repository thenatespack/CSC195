//
//  Phone.h
//  CSC195
//
//  Created by Nathan Spackman on 4/21/25.
//
#pragma once
#include "Electronic.h"

class Phone : public Electronic {
public:
    void Read(std::ostream& ostream, std::istream& istream) override;
    void Write(std::ostream& ostream) override;
    eType GetType() override { return eType::PHONE; }

private:
    int storage = 0; // Unique property for Phone
};

