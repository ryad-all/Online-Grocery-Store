#pragma once
#include "Fish.h"
class Salmon :
    public Fish
{
private:
    float customerRequest;
public:
    Salmon();
    Salmon(const Salmon& copy);
    Salmon(float, float, float);
    virtual ~Salmon();

    virtual void print() const override;


    float getCost() const;
};

