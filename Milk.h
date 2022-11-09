#pragma once
#include "Dairy.h"

class Milk :
    public Dairy
{
private:
    float MilkStock; // in L
    float MilkPrice; // $/L
    float CustomerPriceMilk;
public:
    Milk(float);
    virtual ~Milk();

    void print() const override;

    void setMilkStock(float);
    void setMilkPrice(float);

    float getMilkStock() const;
    float getMilkPrice() const;

    float getCost() const;
};

