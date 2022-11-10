#pragma once
#include "Grocery.h"
class VegetablesAndFruits :
    public Grocery
{
public:
    VegetablesAndFruits();
    VegetablesAndFruits(float, float);
    VegetablesAndFruits(const VegetablesAndFruits&);


    virtual ~VegetablesAndFruits();
 

    virtual void print() const;

};

