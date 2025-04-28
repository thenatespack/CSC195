//
//  Fraction.h
//  CSC195
//
//  Created by Nathan Spackman on 4/24/25.
//
#pragma once
#include <iostream>
#include <numeric>

namespace mathlib{

template<typename T = int>
class Fraction {
private:
    T numerator;
    T denominator;
public:
    Fraction(T num = 0, T denom = 1) : numerator(num), denominator(denom) {
        if(denominator==0){
            throw "divide by zero";
        }
    }
    T getGcd(T a,T b){
        while (b != 0) {
                T temp = b;
                b = a % b;
                a = temp;
            }
            return a;
    }
    
    void Simplify(){
        T gcd = getGcd(numerator,denominator);
        numerator /= gcd;
        denominator /= gcd;
    }
    
    double ToFloat() const {
            return static_cast<float>(numerator) / static_cast<float>(denominator);
    }
    
    friend Fraction operator+(const Fraction& lhs, const Fraction& rhs) {
            return Fraction(lhs.numerator * rhs.denominator + rhs.numerator * lhs.denominator,
                            lhs.denominator * rhs.denominator);
        }

        friend Fraction operator-(const Fraction& lhs, const Fraction& rhs) {
            return Fraction(lhs.numerator * rhs.denominator - rhs.numerator * lhs.denominator,
                            lhs.denominator * rhs.denominator);
        }

        friend Fraction operator*(const Fraction& lhs, const Fraction& rhs) {
            return Fraction(lhs.numerator * rhs.numerator, lhs.denominator * rhs.denominator);
        }

        friend Fraction operator/(const Fraction& lhs, const Fraction& rhs) {
            if (rhs.numerator == 0) {
                throw std::invalid_argument("Cannot divide by zero fraction.");
            }
            return Fraction(lhs.numerator * rhs.denominator, lhs.denominator * rhs.numerator);
        }
    
    friend bool operator==(const Fraction& lhs, const Fraction& rhs) {
            return (lhs.numerator * rhs.denominator) == (rhs.numerator * lhs.denominator);
        }

        friend bool operator!=(const Fraction& lhs, const Fraction& rhs) {
            return !(lhs == rhs);
        }

        friend bool operator<(const Fraction& lhs, const Fraction& rhs) {
            return (lhs.numerator * rhs.denominator) < (rhs.numerator * lhs.denominator);
        }

        friend bool operator>(const Fraction& lhs, const Fraction& rhs) {
            return rhs < lhs;
        }

        friend bool operator<=(const Fraction& lhs, const Fraction& rhs) {
            return rhs <= lhs;
        }

        friend bool operator>=(const Fraction& lhs, const Fraction& rhs) {
            return lhs <= rhs;
        }

        // Stream operators
        friend std::ostream& operator<<(std::ostream& os, const Fraction& fraction) {
            os << fraction.numerator << "/" << fraction.denominator;
            return os;
        }

        friend std::istream& operator>>(std::istream& is, Fraction& fraction) {
            std::string slash="/";
            is >> fraction.numerator >> slash >> fraction.denominator;
            return is;
        }
    
};


}


