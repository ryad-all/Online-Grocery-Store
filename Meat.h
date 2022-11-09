#pragma once
#include "Grocery.h"
class Meat :
    public Grocery
{

public:
    Meat();
    Meat(string);
    
    
    virtual ~Meat();
      
    virtual void print() const; 

};

