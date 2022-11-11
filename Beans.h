#pragma once
#include "Pantry.h"
class Beans :
    public Pantry
{
private:
    float customerRequest;
public:
    Beans();
    Beans(const Beans& copy);
    Beans(float, float, float);
    virtual ~Beans();

    virtual void print() const override;
    virtual Grocery* CloneObject();

    virtual float getCost() const override;

};

