#pragma once
#include "Fish.h"
class Salmon :
    public Fish
{
private:
    float SalmonStock; // in kg
    float SalmonPrice; // $/kg
    float CustomerPriceSalmon;
public:
    Salmon(float);
    

    virtual ~Salmon();

    void print() const override;

    void setSalmonStock(float);
    void setSalmonPrice(float);

    float getSalmonStock() const;
    float getSalmonPrice() const;

    float getCost() const;
};

