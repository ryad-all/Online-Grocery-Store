#include "Haddock.h"

Haddock::Haddock(float x) 
	: Fish("Haddock"), HaddockStock(30), HaddockPrice(20), CustomerPriceHaddock(0)
{

	if (HaddockStock >= x)
		CustomerPriceHaddock *= HaddockPrice;
	HaddockStock -= x;

}


void Haddock::setHaddockStock(float x)
{
	HaddockStock = x;
}
void Haddock::setHaddockPrice(float x)
{
	HaddockPrice = x;
}

float Haddock::getHaddockStock() const
{
	return HaddockStock;
}
float Haddock::getHaddockPrice() const
{
	return HaddockPrice;
}

float Haddock::getCost() const // customer ammount in kg 
{
	return CustomerPriceHaddock;
}
void Haddock::print() const
{
	cout << "The current Haddock stock is " << this->HaddockStock << "kg" << " and its price per Kg is " << this->HaddockPrice << endl;
}

Haddock::~Haddock()
{
	cout << "Object of class Haddock has been destroyed. \n";
}
