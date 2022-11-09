#include "Beef.h"

Beef::Beef(float x)
	:Meat("Beef"), BeefStock(100), BeefPrice(15), CustomerPriceBeef(0)	
{
	BeefStock -= x;
	if (BeefStock <= x)
	CustomerPriceBeef *= BeefPrice;
}


void Beef::setBeefStock(float x)
{
	BeefStock = x;
}
void Beef::setBeefPrice(float x)
{
	BeefPrice = x;
}


float Beef::getBeefStock() const
{
	return BeefStock;
}
float Beef::getBeefPrice() const
{
	return BeefPrice;
}

float Beef::getCost() const // customer ammount in kg 
{
	return CustomerPriceBeef;
}
void Beef::print() const
{
	cout << "The current beef stock is " << this->BeefStock << "Kg" << "  and its price per Kg is " << this->BeefPrice << endl;
}

Beef::~Beef()
{
	cout << "Object of class Beef has been desroyed. \n";
}

