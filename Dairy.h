#pragma once
#include "Grocery.h"
class Dairy :
    public Grocery
{
private:
    float stock;
    float price;
public:
    Dairy();
    Dairy(float, float);
    Dairy(const Dairy&);


    virtual ~Dairy();
    virtual float getPrice() const;
    virtual float getStock() const;

    void updateStock(float);

    virtual void print() const;
};

