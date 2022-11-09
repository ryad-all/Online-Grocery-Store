#pragma once
#include "Dairy.h"
class Cheese :
    public Dairy
{
private:
    float CheeseStock; // in L
    float CheesePrice; // $/L
    float CustomerPriceCheese;
public:
    Cheese(float);
    virtual ~Cheese();

    void print() const override;

    void setCheeseStock(float);
    void setCheesePrice(float);

    float getCheeseStock() const;
    float getCheesePrice() const;

    float getCost() const;

};

