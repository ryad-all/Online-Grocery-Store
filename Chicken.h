#pragma once
#include "Meat.h"
class Chicken :
    public Meat
{
private:
    float customerRequest;
public:
    Chicken();
    Chicken(const Chicken& copy);
    Chicken(float, float, float);
    virtual ~Chicken();

    virtual void print() const override;
    virtual Grocery* CloneObject();

    virtual float getCost() const;
};

