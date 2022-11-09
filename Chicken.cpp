#include "Chicken.h"

Chicken::Chicken(float x)
	: ChickenStock(200), ChickenPrice(20), CustomerPriceChicken(0)
{
	if (ChickenStock <= x)
		ChickenStock -= x;
}


void Chicken::setChickenStock(float x)
{
	ChickenStock = x;
}
void Chicken::setChickenPrice(float x)
{
	ChickenPrice = x;
}

float Chicken::getChickenStock() const
{
	return ChickenStock;
}
float Chicken::getChickenPrice() const
{
	return ChickenPrice;
}

float Chicken::getCost() const
{
	return CustomerPriceChicken;
}

void Chicken::print() const
{
	cout << "The current chicken stock is " << this->ChickenStock << "kg" << "  and its price per Kg is " << this->ChickenPrice << endl;
}

Chicken::~Chicken()
{
	cout << "Object of class Chicken has been desroyed. \n";
}