#pragma once
#include "Grocery.h"
class VegetablesAndFruits :
    public Grocery
{
public:
    VegetablesAndFruits();
    VegetablesAndFruits(string);


    ~VegetablesAndFruits();

    void virtual print() const;

};

