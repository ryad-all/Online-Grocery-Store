#pragma once
#include "Grocery.h"
class Meat :
    public Grocery
{
private:

public:
    Meat();
    virtual ~Meat();
      
    virtual void print() const override; //overrides grocery print 

};

