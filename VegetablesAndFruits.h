#pragma once
#include "Grocery.h"
class VegetablesAndFruits :
    public Grocery
{
public:
    VegetablesAndFruits();
    ~VegetablesAndFruits();

    void virtual print() const;

};

