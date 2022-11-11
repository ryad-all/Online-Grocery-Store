#pragma once
#include "Fish.h"

class SeaBass : public Fish
{
private:
    float customerRequest;
public:
    SeaBass();
    SeaBass(const SeaBass& copy);
    SeaBass(float, float, float);
    virtual ~SeaBass();

    virtual void print() const override;
    virtual Grocery* CloneObject();

    virtual float getCost() const;
};

