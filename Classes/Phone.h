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
    int coverage;
    void Read(std::istream& istream, std::ostream& ostream) override{
        long uptime;
        ostream << "Enter name: "; istream >> name;
        ostream << "Enter isOn: "; istream >> isOn;
        ostream << "Enter upTime: "; istream >> uptime;
        setUpTime(uptime);
        ostream << "Enter Coverage: "; istream >> coverage;
    }
    void Write(std::ostream& ostr) const override {
        ostr << "Phone: " << name << ", isOn: " << isOn << ", upTime: " << getUpTime() << ", Coverage: " << coverage  << std::endl;
    }
   
    /*Electronic::eType GetType() const override {
          return Electronic::eType::Phone; // Corrected with full qualification
    }*/

};

