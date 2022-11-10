#include "Eggs.h"

Eggs::Eggs(float x, float y, float z) : Dairy(x, y)
{
	this->setName("Eggs");
	customerRequest = z;
	this->updateStock(customerRequest);
}

Eggs::Eggs() : Dairy() {
	this->setName("Eggs");
	customerRequest = 0;
}


Eggs::Eggs(const Eggs& copy) : Dairy(copy) {
	this->setName("Eggs");
	customerRequest = copy.customerRequest;
}

float Eggs::getCost() const
{
	return (this->getPrice()) * customerRequest;
}

void Eggs::print() const
{
	cout << "The current Eggs stock is " << this->getStock() << "Dozens" << "  and its price per dozen is " << this->getPrice() << endl;
}
Eggs::~Eggs()
{
	cout << "Object of class Eggs has been desroyed. \n";
}