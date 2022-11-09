#pragma once
#include "Pantry.h"
class Beans :
    public Pantry
{
private:
    float BeansStock; // per can
    float BeansPrice; // $/can
    float CustomerPriceBeans;
public:
    Beans(float);
    virtual ~Beans();

    void print() const override;

    void setBeansStock(float);
    void setBeansPrice(float);

    float getBeansStock() const;
    float getBeansPrice() const;

    float getCost() const;
};

