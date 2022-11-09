#include "Beans.h"

Beans::Beans(float x)
	:Pantry("Beans"), BeansStock(80), BeansPrice(1.50), CustomerPriceBeans(0)
{
	BeansStock -= x;
	if (BeansStock <= x)
		CustomerPriceBeans *= BeansPrice;
}


void Beans::setBeansStock(float x)
{
	BeansStock = x;
}
void Beans::setBeansPrice(float x)
{
	BeansPrice = x;
}


float Beans::getBeansStock() const
{
	return BeansStock;
}
float Beans::getBeansPrice() const
{
	return BeansPrice;
}

float Beans::getCost() const 
{
	return CustomerPriceBeans;
}
void Beans::print() const
{
	cout << "The current Beans stock is " << this->BeansStock << " cans" << "  and its price per can is " << this->BeansPrice << endl;
}

Beans::~Beans()
{
	cout << "Object of class Beans has been desroyed. \n";
}