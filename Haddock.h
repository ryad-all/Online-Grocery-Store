#pragma once
#include "Fish.h"
class Haddock :
    public Fish
{
private:
    float customerRequest;
public:
    Haddock();
    Haddock(const Haddock& copy);
    Haddock(float, float, float);
    virtual ~Haddock();

    virtual void print() const override;


    virtual float getCost() const;
};

