#include "Grocery.h"



Grocery::Grocery(string nam, float stk, float pr)
{
	Name = nam;
	stock = stk;
	price = pr;
}
Grocery::Grocery()
{
	Name = "NULL";
	stock = 0;
	price = 0;
}
Grocery::Grocery(const Grocery& copy) : Name(copy.Name), stock(copy.stock), price(copy.price)
{
}

void  Grocery::updateStock(float x)
{
	if (x <= stock)
		stock -= x;
}

void Grocery::print() const
{
	cout << "Meat, Pantry, Dairy and VegetablesAndFruits\n";
}


string Grocery::getName() const
{
	return Name;
}
void Grocery::setName(string x)
{
	Name = x;
 }

float Grocery::getStock() const
{
	return stock;
}
float Grocery::getPrice() const
{
	return price;
}
float Grocery::getCost() const
{
	return 0;
}

Grocery::~Grocery()
{
	cout <<  "Object of class Grocery has been destroyed. \n"; 
}