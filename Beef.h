#pragma once
#include "Meat.h"
class Beef :
    public Meat
{
private: 
    float BeefStock; // in kg
    float BeefPrice; // $/kg
    float CustomerPriceBeef;
public:
    Beef(float);
    virtual ~Beef();

    void print() const override;
    
    void setBeefStock(float);
    void setBeefPrice(float);

    float getBeefStock() const;
    float getBeefPrice() const;

    float getCost() const;
};

