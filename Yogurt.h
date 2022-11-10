#pragma once
#include "Dairy.h"
class Yogurt :
    public Dairy
{
private:
    float customerRequest;
public:
    Yogurt();
    Yogurt(const Yogurt& copy);
    Yogurt(float, float, float);
    virtual ~Yogurt();

    virtual void print() const override;


    float getCost() const;

};

