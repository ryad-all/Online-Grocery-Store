#pragma once
#include "Dairy.h"

class Milk :
    public Dairy
{
private:
    float customerRequest;
public:
    Milk();
    Milk(const Milk& copy);
    Milk(float, float, float);
    virtual ~Milk();

    virtual void print() const override;


    float getCost() const;
};

