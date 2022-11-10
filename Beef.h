#pragma once
#include "Meat.h"
class Beef :
    public Meat
{
private: 
    float customerRequest;
public:
    Beef();
    Beef(const Beef& copy);
    Beef(float, float, float);
    virtual ~Beef();

    virtual void print() const override;
    

    float getCost() const;
};

