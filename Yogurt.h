#pragma once
#include "Dairy.h"
class Yogurt :
    public Dairy
{
private:
    float YogurtStock; // in L
    float YogurtPrice; // $/L
    float CustomerPriceYogurt;
public:
    Yogurt(float);
    virtual ~Yogurt();

    void print() const override;

    void setYogurtStock(float);
    void setYogurtPrice(float);

    float getYogurtStock() const;
    float getYogurtPrice() const;

    float getCost() const;

};

