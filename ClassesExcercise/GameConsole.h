//
//  GameConsole.h
//  CSC195
//
//  Created by Nathan Spackman on 4/21/25.
//
class GameConsole : public Electronic {
public:
    void Read(std::ostream& ostream, std::istream& istream) override{
        Electronic::Read(ostream, istream);
        ostream << "Enter controller type: ";
        istream >> controllerType;
    }
    void Write(std::ostream& ostream) override {
        Electronic::Write(ostream);
        ostream << "Controller Type: " << controllerType << "\n";
        ostream << "Type: Game Console\n";
    }
    eType GetType() override { return eType::GAMECONSOLE; }

private:
    std::string controllerType; // Unique property for GameConsole
};
