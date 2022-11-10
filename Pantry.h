#pragma once
#include "Grocery.h"
class Pantry :
    public Grocery
{
private:
    float stock;
    float price;
public:
    Pantry();
    Pantry(float, float);
    Pantry(const Pantry&);


    virtual ~Pantry();
    virtual float getPrice() const;
    virtual float getStock() const;

    void updateStock(float);

    virtual void print() const;

};

