//
//  main.cpp
//  memoryreview
//
//  Created by Nathan Spackman on 4/10/25.
//

#include <iostream>
using namespace std;

struct Person
{
    char name[32];
    int id;
};
// create a function above main() called Square that takes in an int parameter
// in the function, multiply the int parameter by itself and assign it back to the parameter (i = i * i)
// call the Square function with the int variable created in the REFERENCE section
void Square(int i){
    i=i*i;
}

void Double(int* i){
    *i = (*i) *2;
}



int main()
{
    // ** REFERENCE **
    
    int somenumber= -90000; // declare an int variable and set the value to some number (less than 10)
    int& somereference= somenumber; // declare a int reference and set it to the int variable above
    std::cout << somenumber << std::endl; // output the int variable

    somereference= 123;  // set the int reference to some number
    std::cout << somenumber << std::endl;  // output the int variable
    // what happened to the int variable when the reference was changed? The reference is an alias and when you change the refernece you change the other value;
    
    std::cout << &somenumber << std::endl;// output the address of the int variable
    std::cout << &somereference << std::endl;// output the address of the int reference
    // are the addresses the same or different? yes because somereference holds the same adddress

    // ** REFERENCE PARAMETER **
    //
    // create a function above main() called Square that takes in an int parameter
    // in the function, multiply the int parameter by itself and assign it back to the parameter (i = i * i)
    // call the Square function with the int variable created in the REFERENCE section
    Square(somenumber);
    // output the int variable to the console
    std::cout << somenumber << std::endl;
    // !! notice how the variable has not changed, this is because we only passed the value to the function !!
    // change the Square function to take a int reference
    // !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
    // !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""

    // ** POINTER VARIABLE **
    
   
    int* intpointer =nullptr;  // declare an int pointer, set it to nullptr (it points to nothing)
    intpointer=&somenumber;  // set the int pointer to the address of the int variable created in the REFERENCE section
    
    std::cout << intpointer << std::endl;// output the value of the pointer
    // what is this address that the pointer is pointing to? the integer from before
    std::cout << *intpointer << std::endl;// output the value of the object the pointer is pointing to (dereference the pointer)

    // ** POINTER PARAMETER **
    //
    // create a function above main() called Double that takes in an int pointer parameter
    // in the function, multiply the int pointer parameter by 2 and assign it back to the parameter (i = i * 2)
    // !! make sure to dereference the pointer to set the value and not set the address !!
    // call the Double function with the pointer created in the POINTER VARIABLE section
    Double(intpointer);
    std::cout << *intpointer << std::endl;// output the dereference pointer
    std::cout << somenumber << std::endl; // output the int variable created in the REFERENCE section
    // did the int variable's value change when using the pointer? yes
    
}

