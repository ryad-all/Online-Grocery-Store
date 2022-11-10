#pragma once
#include "Grocery.h"
class VegetablesAndFruits :
    public Grocery
{
private:
    float stock;
    float price;
public:
    VegetablesAndFruits();
    VegetablesAndFruits(float, float);
    VegetablesAndFruits(const VegetablesAndFruits&);


    virtual ~VegetablesAndFruits();
    virtual float getPrice() const;
    virtual float getStock() const;

    void updateStock(float);

    virtual void print() const;

};

