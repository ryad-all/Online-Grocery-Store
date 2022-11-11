#pragma once
#include "Meat.h"
class Beef :
    public Meat
{
private: 
    float customerRequest;
public:
    Beef();
    Beef(const Beef&);
    Beef(float, float, float);
    virtual ~Beef();
    
    virtual void print() const override;

    virtual Grocery* CloneObject();
    

    virtual float getCost() const;
};

