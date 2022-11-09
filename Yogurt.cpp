#include "Yogurt.h"

Yogurt::Yogurt(float x)
	: YogurtStock(30), YogurtPrice(25), CustomerPriceYogurt(0)
{
	YogurtStock -= x;
	if (YogurtStock <= x)
		CustomerPriceYogurt *= YogurtPrice;
}


void Yogurt::setYogurtStock(float x)
{
	YogurtStock = x;
}
void Yogurt::setYogurtPrice(float x)
{
	YogurtPrice = x;
}


float Yogurt::getYogurtStock() const
{
	return YogurtStock;
}
float Yogurt::getYogurtPrice() const
{
	return YogurtPrice;
}

float Yogurt::getCost() const // customer ammount in kg 
{
	return CustomerPriceYogurt;
}
void Yogurt::print() const
{
	cout << "The current Yogurt stock is " << this->YogurtStock << "Kg" << "  and its price per Kg is " << this->YogurtPrice << endl;
}

Yogurt::~Yogurt()
{
	cout << "Object of class Yogurt has been desroyed. \n";
}