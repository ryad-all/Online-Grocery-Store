#pragma once
#include "Meat.h"
class Fish :
    public Meat
{
private:

public:
    Fish();
    Fish(float, float);
   
    virtual ~Fish();

    
    Fish(const Fish&);


  

    

    virtual void print() const override; //overrides meat print 
};

