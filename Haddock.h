#pragma once
#include "Fish.h"
class Haddock :
    public Fish
{
private:
    float HaddockStock; // in kg
    float HaddockPrice; // $/kg
    float CustomerPriceHaddock;
public:
    Haddock(float);
    

    virtual ~Haddock();

    void print() const override;

    void setHaddockStock(float);
    void setHaddockPrice(float);

    float getHaddockStock() const;
    float getHaddockPrice() const;

    float getCost() const;
};

