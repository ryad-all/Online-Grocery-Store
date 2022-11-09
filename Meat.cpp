#include "Meat.h"


Meat::Meat() : Grocery()
{

}
Meat::Meat() : Grocery("Meat")
{

}

Meat::Meat(string str) : Grocery(str)
{

}

Meat::~Meat()
{
	cout << "Object of class Meat has been destoryed. \n";
}

void Meat::print() const
{
	cout << "Class Meat.\n";
}
