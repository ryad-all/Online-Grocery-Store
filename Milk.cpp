#include "Milk.h"

Milk::Milk(float x, float y, float z) : Dairy(x, y)
{
	this->setName("Milk");
	customerRequest = z;
	this->updateStock(customerRequest);
}

Milk::Milk() : Dairy() {
	this->setName("Milk");
	customerRequest = 0;
}


Milk::Milk(const Milk& copy) : Dairy(copy) {
	this->setName("Milk");
	customerRequest = copy.customerRequest;
}

float Milk::getCost() const
{
	return (this->getPrice()) * customerRequest;
}

void Milk::print() const
{
	cout << "The current Milk stock is " << this->getStock() << "Liters" << "  and its price per Liter is " << this->getPrice() << endl;
}

Milk::~Milk()
{
	cout << "Object of class Milk has been desroyed. \n";
}

