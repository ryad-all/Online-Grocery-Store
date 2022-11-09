#include "Grocery.h"

Grocery::Grocery(string name, float pric, float y)
	: Name("Null"), stock(y), price(pric)
{
}
Grocery::Grocery(const Grocery& copy) : Name(copy.Name), price(copy.price), stock(copy.stock)
{
}
void Grocery::setName(string x)
{
	Name = x;
}
void Grocery::setPrice(float x)
{
	price = x;
}
void Grocery::setStock(float x)
{
	stock = x;
}


string Grocery::getName()
{
	return Name;
}

void Grocery::setGroceryName(string name)
{
	Name = name;
}

Grocery::~Grocery()
{
	cout <<  "Object of class Grocery has been destroyed. \n"; 
}