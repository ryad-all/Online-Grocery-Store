#pragma once
#include "Meat.h"
class Chicken :
    public Meat
{
private:
    float ChickenStock; // in kg
    float ChickenPrice; // $/kg
    float CustomerPriceChicken;
public:
    Chicken(float);   

    virtual ~Chicken();

    void print() const override;

    void setChickenStock(float);
    void setChickenPrice(float);

    float getChickenStock() const;
    float getChickenPrice() const;

    float getCost() const;
};

