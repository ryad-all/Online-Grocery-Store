#pragma once
#include "VegetablesAndFruits.h"
class Strawberries :
    public VegetablesAndFruits
{
private:
    float StrawberriesStock; // in dozen
    float StrawberriesPrice; // $/dozen
    float CustomerPriceStrawberries;
public:
    Strawberries(float);
    virtual ~Strawberries();

    void print() const override;

    void setStrawberriesStock(float);
    void setStrawberriesPrice(float);

    float getStrawberriesStock() const;
    float getStrawberriesPrice() const;

    float getCost() const;
};

