#include "Yogurt.h"

Yogurt::Yogurt(float x, float y, float z) : Dairy(x, y)
{
	this->setName("Yogurt");
	customerRequest = z;
	this->updateStock(customerRequest);
}

Yogurt::Yogurt() : Dairy() {
	this->setName("Yogurt");
	customerRequest = 0;
}


Yogurt::Yogurt(const Yogurt& copy) : Dairy(copy) {
	this->setName("Yogurt");
	customerRequest = copy.customerRequest;
}

float Yogurt::getCost() const
{
	return (this->getPrice()) * customerRequest;
}

void Yogurt::print() const
{
	cout << "The current Yogurt stock is " << this->getStock() << "Dozens" << "  and its price per dozen is " << this->getPrice() << endl;
}
Yogurt::~Yogurt()
{
	cout << "Object of class Yogurt has been desroyed. \n";
}