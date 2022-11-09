#pragma once
#include "Grocery.h"
class Pantry :
    public Grocery
{
public:
    Pantry();
    virtual ~Pantry();

    void virtual print() const;
};

