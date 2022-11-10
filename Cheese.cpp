#include "Cheese.h"

Cheese::Cheese(float x, float y, float z) : Dairy(x, y)
{
	this->setName("Cheese");
	customerRequest = z;
	this->updateStock(customerRequest);
}

Cheese::Cheese() : Dairy() {
	this->setName("Cheese");
	customerRequest = 0;
}


Cheese::Cheese(const Cheese& copy) : Dairy(copy) {
	this->setName("Cheese");
	customerRequest = copy.customerRequest;
}

float Cheese::getCost() const
{
	return (this->getPrice()) * customerRequest;
}

void Cheese::print() const
{
	cout << "The current Cheese stock is " << this->getStock() << "Liters" << "  and its price per Liter is " << this->getPrice() << endl;
}
Cheese::~Cheese()
{
	cout << "Object of class Cheese has been desroyed. \n";
}

