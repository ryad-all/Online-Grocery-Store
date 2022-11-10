#include "Dairy.h"

Dairy::Dairy() : Grocery()
{
	price = 15;
	stock = 0;
}
Dairy::Dairy(float y, float z) : Grocery()
{
	this->setName("Dairy");
	stock = y;
	price = 15;
}
Dairy::Dairy(const Dairy& copy) : Grocery(copy)
{
	stock = copy.stock;
	price = 15;
}


void  Dairy::updateStock(float x)
{
	if (x <= stock)
		stock -= x;
}


float Dairy::getStock() const
{
	return stock;
}
float Dairy::getPrice() const
{
	return price;
}
Dairy::~Dairy()
{
	cout << "Object of class Dairy has been destoryed. \n";
}

void Dairy::print() const
{
	cout << "Milk, Yogurt, cheese and eggs\n";
}
