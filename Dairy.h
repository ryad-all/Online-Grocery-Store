#pragma once
#include "Grocery.h"
class Dairy :
    public Grocery
{
private:
public:
    Dairy();
    virtual ~Dairy();

    void virtual print() const;
};

