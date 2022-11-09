#pragma once
#include "Fish.h"

class SeaBass : public Fish
{
private:
    float SeaBassStock; // in kg
    float SeaBassPrice; // $/kg
    float CustomerPriceSeaBass;
public:
    SeaBass(float);
    
    virtual ~SeaBass();

    void print() const override;

    void setSeaBassStock(float);
    void setSeaBassPrice(float);

    float getSeaBassStock() const;
    float getSeaBassPrice() const;

    float getCost() const;
};

