//
//  datatypes.cpp
//  datatypes
//
//  Created by Nathan Spackman on 4/1/25.
//

#include <iostream>
/*
 name        string     Stores the employee’s name
 initial     char     Stores the first letter of the last name
 age         short     Stores employee age (smallest type for 18-99 range)
 isAdult     bool     True if 18 or older, false otherwise
 zipcode     unsigned int     Stores a 5-digit zip code (non-negative)
 wage         float     Stores the hourly wage
 daysWorked     short     Stores the number of days worked (max 7)
 hoursWorkedPerDay     float[7]
 */
const float TAX = 0.1f; // 10% tax rate
std::string name;
char initial;
short age;
bool isAdult;
uint zipcode;
float wage;
short daysWorked;
float hoursWorkedPerDay[7];

const std::string prompts[] = {"Enter first name: ","Enter initial of last name: ", "Enter age: ","Enter zipcode: ","Enter hourly wage: ","Enter number of days worked (max 7): ","Enter hours worked for day "};

int main(int argc, const char * argv[]) {
    std::cout << prompts[0];
    std::cin >> name;

    std::cout << prompts[1];
    std::cin >> initial;

    std::cout << prompts[2];
    std::cin >> age;
    isAdult = (age >= 18);  // Determine adulthood status

    std::cout << prompts[3];
    std::cin >> zipcode;

    std::cout << prompts[4];
    std::cin >> wage;

    std::cout << prompts[5];
    std::cin >> daysWorked;
    
    float totalHours = 0;

    for (int i = 0; i < daysWorked; i++) {
        std::cout << prompts[6] << (i + 1) << ": ";
        std::cin >> hoursWorkedPerDay[i];

        totalHours += hoursWorkedPerDay[i];  // Accumulate total hours
    }
    float grossIncome = totalHours * wage;
    float taxAmount = grossIncome * TAX;
    float netIncome = grossIncome - taxAmount;
    
    std::cout << "\nEmployee Payroll Summary\n";
    std::cout << "-------------------------\n";
    std::cout << "Name: " << name << " " << initial << ".\n";
    std::cout << "Age: " << age << " (Adult: " << (isAdult ? "Yes" : "No") << ")\n";
    std::cout << "Zipcode: " << zipcode << "\n";
    std::cout << "Hourly Wage: $" << wage << " per hour\n";
    std::cout << "Total Hours Worked: " << totalHours << " hours\n";
    std::cout << "Gross Income: $" << grossIncome << "\n";
    std::cout << "Tax Amount: $" << taxAmount << "\n";
    std::cout << "Net Income: $" << netIncome << "\n";
    
    return 0;
}
