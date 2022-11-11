#include "Meat.h"


Meat::Meat(float STOCK, float PRICE) : Grocery(STOCK, PRICE)
{
	
}
Meat::Meat() : Grocery()
{
	this->setName("Meat");
}
Meat::Meat(const Meat& copy) : Grocery(copy)
{
	this->setName("Meat");
}

Grocery* Meat::CloneObject() {

	return new Meat(*this);
}
Meat::~Meat()
{
	cout << "Object of class Meat has been destoryed. \n";
}

void Meat::print() const
{
	cout << "Beef, chicken and fish\n";
}
