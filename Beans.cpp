#include "Beans.h"

Beans::Beans(float x, float y, float z) : Pantry(x, y)
{
	this->setName("Beans");
	customerRequest = z;
	this->updateStock(customerRequest);
}

Beans::Beans() : Pantry() {
	this->setName("Beans");
	customerRequest = 0;
}


Beans::Beans(const Beans& copy) : Pantry(copy) {
	this->setName("Beans");
	customerRequest = copy.customerRequest;
}

float Beans::getCost() const
{
	return (this->getPrice()) * customerRequest;
}

void Beans::print() const
{ 
	cout << "The current Beans stock is " << this->getStock() << " cans" << "  and its price per can is " << this->getPrice() << endl;
}

Beans::~Beans()
{
	cout << "Object of class Beans has been desroyed. \n";
}