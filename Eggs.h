#pragma once
#include "Dairy.h"
class Eggs :
    public Dairy
{
private:
    float customerRequest;
public:
    Eggs();
    Eggs(const Eggs& copy);
    Eggs(float, float, float);
    virtual ~Eggs();

    virtual void print() const override;


    virtual float getCost() const;
};

