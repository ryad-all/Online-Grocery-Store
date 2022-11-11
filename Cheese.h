#pragma once
#include "Dairy.h"
class Cheese :
    public Dairy
{
private:
    float customerRequest;
public:
    Cheese();
    Cheese(const Cheese& copy);
    Cheese(float, float, float);
    virtual ~Cheese();

    virtual void print() const override;


    virtual float getCost() const;

};

