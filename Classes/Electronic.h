//
//  Electronic.h
//  CSC195
//
//  Created by Nathan Spackman on 4/21/25.
//
#pragma once

#include <iostream>

class Electronic
{
public:
    virtual ~Electronic() = default;
    enum class eType
    {
      Phone,
      Computer,
      Console
    };
    virtual void Read(std::istream& istream, std::ostream& ostream)const =0;
    virtual void Write(std::ostream& ostream)const =0;
    std::string name;
    bool isOn;
    long getUpTime()const{
        return upTime;
    }
    std::string GetName() const{
        return name;
    }
    void setUpTime(long _upTime){
        upTime=_upTime;
    }
    virtual eType GetType() const = 0;
private:
    long upTime;
    
};


