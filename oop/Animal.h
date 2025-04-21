//
//  Animal.h
//  CSC195
//
//  Created by Nathan Spackman on 4/15/25.
//
#pragma once
#ifndef Animal_h
#define Animal_h

class Animal{
    
public:
    Animal(){
        m_limbs=2;
        
    }
    Animal(int limbs){
        m_limbs=limbs;
        
    }
    virtual void Travel();
    virtual void Speak();
    
    int m_limbs;
    
protected:
};

#endif /* Animal_h */
