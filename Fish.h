#pragma once
#include "Meat.h"
class Fish :
    public Meat
{
private:

public:
    Fish();
    virtual ~Fish();
    virtual float getCost() const = 0;
    virtual void print() const; //overrides grocery print 
};

