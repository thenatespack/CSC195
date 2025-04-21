//
//  Phone.cpp
//  CSC195
//
//  Created by Nathan Spackman on 4/21/25.
//
#include "Phone.h"
void Phone::Read(std::ostream& ostream, std::istream& istream) {
    Electronic::Read(ostream, istream);
    ostream << "Enter storage (GB): ";
    istream >> storage;
}
void Phone::Write(std::ostream& ostream) {
    Electronic::Write(ostream);
    ostream << "Storage: " << storage << "GB\n";
    ostream << "Type: Phone\n";
}
