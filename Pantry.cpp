#include "Pantry.h"

Pantry::Pantry() : Grocery()
{
	price = 15;
	stock = 0;
}
Pantry::Pantry(float y, float z) : Grocery()
{
	this->setName("Pantry");
	stock = y;
	price = 15;
}
Pantry::Pantry(const Pantry& copy) : Grocery(copy)
{
	stock = copy.stock;
	price = 15;
}


void  Pantry::updateStock(float x)
{
	if (x <= stock)
		stock -= x;
}


float Pantry::getStock() const
{
	return stock;
}
float Pantry::getPrice() const
{
	return price;
}
Pantry::~Pantry()
{
	cout << "Object of class Pantry has been destoryed. \n";
}

void Pantry::print() const
{
	cout << "Beans\n";
}