#include "Haddock.h"

Haddock::Haddock(float x, float y, float z) : Fish(x, y)
{
	this->setName("Haddock");
	customerRequest = z;
	updateStock(customerRequest);
}

Haddock::Haddock() : Fish() {
	this->setName("Haddock");
	customerRequest = 0;
}

Haddock::Haddock(const Haddock& copy) : Fish(copy) {
	this->setName("Haddock");
	customerRequest = copy.customerRequest;
}

float Haddock::getCost() const
{
	return (this->getPrice()) * customerRequest;
}

void Haddock::print() const
{
	cout << "The current Haddock stock is " << this->getStock() << "kg" << " and its price per Kg is " << this->getPrice() << endl;
}
Grocery* Haddock::CloneObject() {

	return new Haddock(*this);
}
Haddock::~Haddock()
{
	cout << "Object of class Haddock has been destroyed. \n";
}
