#pragma once
#include "Grocery.h"
class Dairy :
    public Grocery
{
private:
public:
    Dairy();
    Dairy(float, float);
    Dairy(const Dairy&);


    virtual ~Dairy();


    

    virtual void print() const;
};

