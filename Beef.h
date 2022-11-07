#pragma once
#include "Meat.h"
class Beef :
    public Meat
{
private: 
    int BeefStock; // in kg
    int BeefPrice; // $/kg
public:
    Beef();
    Beef(int, int);
    virtual ~Beef();

    virtual void print() const override;
    
    void setBeefStock();
    void setBeefPrice();

    int getBeefStock();
    int getPriceStock();

    int getCost();
};

