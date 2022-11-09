#include "Cheese.h"

Cheese::Cheese(float x)
	:Dairy("Cheese"), CheeseStock(30), CheesePrice(25), CustomerPriceCheese(0)
{
	CheeseStock -= x;
	if (CheeseStock <= x)
		CustomerPriceCheese *= CheesePrice;
}


void Cheese::setCheeseStock(float x)
{
	CheeseStock = x;
}
void Cheese::setCheesePrice(float x)
{
	CheesePrice = x;
}


float Cheese::getCheeseStock() const
{
	return CheeseStock;
}
float Cheese::getCheesePrice() const
{
	return CheesePrice;
}

float Cheese::getCost() const // customer ammount in kg 
{
	return CustomerPriceCheese;
}
void Cheese::print() const
{
	cout << "The current Cheese stock is " << this->CheeseStock << "Kg" << "  and its price per Kg is " << this->CheesePrice << endl;
}

Cheese::~Cheese()
{
	cout << "Object of class Cheese has been desroyed. \n";
}

