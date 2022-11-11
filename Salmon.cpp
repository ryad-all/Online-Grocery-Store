#include "Salmon.h"

Salmon::Salmon(float x, float y, float z) : Fish(x, y)
{
	this->setName("SeaBass");
	customerRequest = z;
	updateStock(customerRequest);
}

Salmon::Salmon() : Fish() {
	this->setName("Salmon");
	customerRequest = 0;
}

Salmon::Salmon(const Salmon& copy) : Fish(copy) {
	this->setName("Salmon");
	customerRequest = copy.customerRequest;
}

float Salmon::getCost() const
{
	return (this->getPrice()) * customerRequest;
}


void Salmon::print() const
{
	cout << "The current Salmon stock is " << this->getStock() << "kg" << "  and its price per Kg is " << this->getPrice() << endl;
}
Grocery* Salmon::CloneObject() {

	return new Salmon(*this);
}
Salmon::~Salmon()
{
	cout << "Object of class Salmon has been desroyed. \n";
}