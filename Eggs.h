#pragma once
#include "Dairy.h"
class Eggs :
    public Dairy
{
private:
    float EggsStock; // in dozen
    float EggsPrice; // $/dozen
    float CustomerPriceEggs;
public:
    Eggs(float);
    virtual ~Eggs();

    void print() const override;

    void setEggsStock(float);
    void setEggsPrice(float);

    float getEggsStock() const;
    float getEggsPrice() const;

    float getCost() const;
};

