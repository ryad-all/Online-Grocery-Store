#include "SeaBass.h"

SeaBass::SeaBass(float x, float y, float z) : Fish(x, y)
{
	this->setName("SeaBass");
	customerRequest = z;
	updateStock(customerRequest);
}

SeaBass::SeaBass() : Fish() {
	this->setName("SeaBass");
	customerRequest = 0;
}

SeaBass::SeaBass(const SeaBass& copy) : Fish(copy) {
	this->setName("SeaBass");
	customerRequest = copy.customerRequest;
}

float SeaBass::getCost() const
{
	return (this->getPrice()) * customerRequest;
}


void SeaBass::print() const
{
	cout << "The current SeaBass stock is " << this->getStock() << "kg" << "  and its price per Kg is " << this->getPrice() << endl;
}

SeaBass::~SeaBass()
{
	cout << "Object of class Chicken has been desroyed. \n";
}