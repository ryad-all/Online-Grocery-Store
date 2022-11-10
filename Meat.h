#pragma once
#include "Grocery.h"
class Meat :
    public Grocery
{
private:

public:
    Meat();
    Meat(float, float);
    Meat(const Meat&);
    
    
    virtual ~Meat();


    virtual void print() const; 

};

