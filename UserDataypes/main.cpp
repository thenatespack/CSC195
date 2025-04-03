//
//  main.cpp
//  structsandotherstuff
//
//  Created by Nathan Spackman on 4/2/25.
//

#include <iostream>
#include "declerations.h"


int main(int argc, const char * argv[]) {
    
    Sandwhich pastrami;
    pastrami.heatSandwhich();
    pastrami.meat= "Pastrami";
    pastrami.weight = 1.0f;
    std::cout << pastrami.meat << std::endl;
    return 0;
}
