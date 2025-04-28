//
//  main.cpp
//  FractionExercise
//
//  Created by Nathan Spackman on 4/24/25.
//

#include <iostream>
#include "Fraction.h"

using namespace mathlib;

int main()
{
    Fraction fraction1{ 15, 5 };
    std::cout << fraction1 << std::endl;

    Fraction fraction2{ 15, 6 };
    fraction2.Simplify();
    std::cout << fraction2 << std::endl;
    
    std::cout << fraction1 << " == " << fraction2 << " result: " << (fraction1 == fraction2) << std::endl;
    std::cout << fraction1 << " > " << fraction2 << " result: " << (fraction1 > fraction2) << std::endl;

    std::cout << fraction1 << " + " << fraction2 << " result: " << (fraction1 + fraction2) << std::endl;
    std::cout << fraction1 << " * " << fraction2 << " result: " << (fraction1 * fraction2) << std::endl;

    Fraction fraction3;
    std::cout << "input fraction (numerator - denominator): \n";
    std::cin >> fraction3;
    std::cout << fraction3 << std::endl;
    std::cout << fraction3.ToFloat() << std::endl;
}
