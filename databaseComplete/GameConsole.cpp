#include "GameConsole.h"

void GameConsole::Read(std::ostream& ostream, std::istream& istream) {
    Electronic::Read(ostream, istream);
    ostream << "Enter controller type: ";
    istream >> controllerType;
}

void GameConsole::Write(std::ostream& ostream) const {
    Electronic::Write(ostream);
    ostream << "Controller Type: " << controllerType << "\n";
    ostream << "Type: Game Console\n";
}