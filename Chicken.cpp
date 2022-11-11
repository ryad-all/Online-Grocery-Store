#include "Chicken.h"

Chicken::Chicken(float x, float y, float z) : Meat( x, y)
{
	this->setName("Chicken");
	customerRequest = z;
	updateStock(customerRequest);
}

Chicken::Chicken() : Meat() { 
	this->setName("Chicken");
	customerRequest = 0; 
}

Chicken::Chicken(const Chicken& copy) : Meat(copy) {
	this->setName("Chicken");
	customerRequest = copy.customerRequest;
}

float Chicken::getCost() const
{
	return (this->getPrice()) * customerRequest;
}

Grocery* Chicken::CloneObject() {

	return new Chicken(*this);
}
void Chicken::print() const
{
	cout << "The current chicken stock is " << this->getStock() << "kg" << "  and its price per Kg is " << this->getPrice() << endl;
}

Chicken::~Chicken()
{
	cout << "Object of class Chicken has been desroyed. \n";
}