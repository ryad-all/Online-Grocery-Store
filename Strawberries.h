#pragma once
#include "VegetablesAndFruits.h"
class Strawberries :
    public VegetablesAndFruits
{
private:
    float customerRequest;
public:
    Strawberries();
    Strawberries(const Strawberries& copy);
    Strawberries(float, float, float);
    virtual ~Strawberries();

    virtual void print() const override;
    virtual Grocery* CloneObject();

    virtual float getCost() const;
};

