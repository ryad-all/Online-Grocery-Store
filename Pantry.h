#pragma once
#include "Grocery.h"
class Pantry :
    public Grocery
{
public:
    Pantry();
    Pantry(string);
    virtual ~Pantry();

    void virtual print() const;
};

