#include "Grocery.h"

Grocery::Grocery()
	: StoreName("Null")
{
}

Grocery::Grocery(string name)
	: StoreName(name)
{
}

void Grocery::setGroceryName(string name)
{
	StoreName = name;
}

Grocery::~Grocery()
{
	cout <<  "Object of class Grocery has been destroyed. \n"; 
}