#include "Beef.h"

Beef::Beef(float x, float y, float z) : Meat(x, y)
{
	this->setName("Beef");
	customerRequest = z;
	this->updateStock(customerRequest);
}

Beef::Beef() : Meat() { 
	this->setName("Beef");
	customerRequest = 0; }


Beef::Beef(const Beef& copy) : Meat(copy) {
	this->setName("Beef");
	customerRequest = copy.customerRequest;
}

float Beef::getCost() const
{
	return (this->getPrice()) * customerRequest;
}

void Beef::print() const
{
	cout << "The current beef stock is " << this->getStock() << "Kg" << "  and its price per Kg is " << this->getPrice() << endl;
}

Beef::~Beef()
{
	cout << "Object of class Beef has been desroyed. \n";
}

