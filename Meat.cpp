#include "Meat.h"

Meat::Meat(){}

Meat::~Meat()
{
	cout << "Object of class Meat has been destoryed. \n";
}

void Meat::print() const
{
	cout << "Meat.\n";
}
