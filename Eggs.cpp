#include "Eggs.h"

Eggs::Eggs(float x)
	:Dairy("Eggs"), EggsStock(40), EggsPrice(3), CustomerPriceEggs(0)
{
	EggsStock -= x;
	if (EggsStock <= x)
		CustomerPriceEggs *= EggsPrice;
}


void Eggs::setEggsStock(float x)
{
	EggsStock = x;
}
void Eggs::setEggsPrice(float x)
{
	EggsPrice = x;
}


float Eggs::getEggsStock() const
{
	return EggsStock;
}
float Eggs::getEggsPrice() const
{
	return EggsPrice;
}

float Eggs::getCost() const // customer ammount in kg 
{
	return CustomerPriceEggs;
}
void Eggs::print() const
{
	cout << "The current Eggs stock is " << this->EggsStock << " dozens" << "  and its price per dozen is " << this->EggsPrice << endl;
}

Eggs::~Eggs()
{
	cout << "Object of class Eggs has been desroyed. \n";
}