#include "Pantry.h"

Pantry::Pantry() : Grocery()
{
}
Pantry::Pantry(float y, float z) : Grocery(y,z)
{
	this->setName("Pantry");

}
Pantry::Pantry(const Pantry& copy) : Grocery(copy)
{
}


Pantry::~Pantry()
{
	cout << "Object of class Pantry has been destoryed. \n";
}

void Pantry::print() const
{
	cout << "Beans\n";
}