#include "Strawberries.h"


Strawberries::Strawberries(float x, float y, float z) : VegetablesAndFruits(x, y)
{
	this->setName("Strawberries");
	customerRequest = z;
	this->updateStock(customerRequest);
}

Strawberries::Strawberries() : VegetablesAndFruits() {
	this->setName("Strawberries");
	customerRequest = 0;
}


Strawberries::Strawberries(const Strawberries& copy) : VegetablesAndFruits(copy) {
	this->setName("Strawberries");
	customerRequest = copy.customerRequest;
}

float Strawberries::getCost() const
{
	return (this->getPrice()) * customerRequest;
}

void Strawberries::print() const
{
	cout << "The current Milk stock is " << this->getStock() << "L" << "  and its price per Liter is " << this->getPrice() << endl;
}
Grocery* Strawberries::CloneObject() {

	return new Strawberries(*this);
}
Strawberries::~Strawberries()
{
	cout << "Object of class Milk has been desroyed. \n";
}