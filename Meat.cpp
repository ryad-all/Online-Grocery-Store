#include "Meat.h"


Meat::Meat() : Grocery()
{

}
Meat::Meat(string name) : Grocery(name)
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
