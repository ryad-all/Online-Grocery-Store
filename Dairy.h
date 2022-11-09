#pragma once
#include "Grocery.h"
class Dairy :
    public Grocery
{
private:
public:
    Dairy();
    Dairy(string);
    virtual ~Dairy();

    void virtual print() const;
};

