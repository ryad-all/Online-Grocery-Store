#include "Pantry.h"

Pantry::Pantry() : Grocery()
{
	this->setName("Pantry");
}
Pantry::Pantry(float y, float z) : Grocery(y,z)
{
	this->setName("Pantry");

}
Pantry::Pantry(const Pantry& copy) : Grocery(copy)
{
}

Grocery* Pantry::CloneObject()
{
	return new Pantry(*this);
}
Pantry::~Pantry()
{
	cout << "Object of class Pantry has been destoryed. \n";
}

void Pantry::print() const
{
	cout << "Beans\n";
}