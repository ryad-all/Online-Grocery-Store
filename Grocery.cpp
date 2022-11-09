#include "Grocery.h"

Grocery::Grocery()
	: Name("Null")
{
}

Grocery::Grocery(string name)
	: Name(name)
{
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