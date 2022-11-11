#pragma once
#include "Grocery.h"
class Pantry :
    public Grocery
{
private:
public:
    Pantry();
    Pantry(float, float);
    Pantry(const Pantry&);


    virtual ~Pantry();
    virtual Grocery* CloneObject();
    virtual void print() const;

};

