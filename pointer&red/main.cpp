//
//  main.cpp
//  pointer&red
//
//  Created by Nathan Spackman on 4/8/25.
//

#include <iostream>

void swap(int* i1, int* i2){
    int temp =*i1;
    *i1= *i2;
    *i2=temp;
    
}

int main(int argc, const char * argv[]) {
    int i1=10;
    int i2=20;
    
    int& r= i1;
    r=40;
    swap(&i1,&i2);
    
    std::cout << i1 << std::endl;
    std::cout << i2 << std::endl;
    
    return 0;
}
