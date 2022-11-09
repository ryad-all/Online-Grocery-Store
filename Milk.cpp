#include "Milk.h"

Milk::Milk(float x)
	: Dairy("Milk"), MilkStock(200), MilkPrice(2), CustomerPriceMilk(0)
{
	MilkStock -= x;
	if (MilkStock <= x)
	CustomerPriceMilk *= MilkPrice;
}


void Milk::setMilkStock(float x)
{
	MilkStock = x;
}
void Milk::setMilkPrice(float x)
{
	MilkPrice = x;
}

float Milk::getMilkStock() const
{
	return MilkStock;
}
float Milk::getMilkPrice() const
{
	return MilkPrice;
}

float Milk::getCost() const // customer ammount in kg 
{
	return CustomerPriceMilk;
}
void Milk::print() const
{
	cout << "The current Milk stock is " << this->MilkStock << "L" << "  and its price per L is " << this->MilkPrice << endl;
}

Milk::~Milk()
{
	cout << "Object of class Milk has been desroyed. \n";
}

